/*
 * Copyright 2017 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#import "FirebaseInAppMessaging/Sources/Private/Runtime/FIRIAMFetchFlow.h"

// an implementation of FIRIAMDisplayExecutor by triggering the display when app is foregrounded
NS_EXTENSION_UNAVAILABLE("Firebase In App Messaging is not supported for iOS extensions.")
API_AVAILABLE(ios(13.0), tvos(13.0))
@interface FIRIAMFetchOnAppForegroundFlow : FIRIAMFetchFlow
- (void)start;
- (void)stop;
@end
