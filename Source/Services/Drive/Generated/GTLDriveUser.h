/* Copyright (c) 2015 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLDriveUser.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Drive API (drive/v3)
// Description:
//   The API to interact with Drive.
// Documentation:
//   https://developers.google.com/drive/
// Classes:
//   GTLDriveUser (0 custom class methods, 6 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLDriveUser
//

// Information about a Drive user.

@interface GTLDriveUser : GTLObject

// A plain text displayable name for this user.
@property (nonatomic, copy) NSString *displayName;

// The email address of the user. This may not be present in certain contexts if
// the user has not made their email address visible to the requester.
@property (nonatomic, copy) NSString *emailAddress;

// This is always drive#user.
@property (nonatomic, copy) NSString *kind;

// Whether this user is the requesting user.
@property (nonatomic, retain) NSNumber *me;  // boolValue

// The user's ID as visible in Permission resources.
@property (nonatomic, copy) NSString *permissionId;

// A link to the user's profile photo, if available.
@property (nonatomic, copy) NSString *photoLink;

@end
