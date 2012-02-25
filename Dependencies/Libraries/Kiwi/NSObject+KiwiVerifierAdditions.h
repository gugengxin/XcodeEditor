//
// Licensed under the terms in License.txt
//
// Copyright 2010 Allen Ding. All rights reserved.
//

#import "KiwiConfiguration.h"

@protocol KWVerifying;

@interface NSObject (KiwiVerifierAdditions)

#pragma mark -
#pragma mark Attaching to Verifiers

- (id) attachToVerifier:(id<KWVerifying>)aVerifier;

- (id) attachToVerifier:(id<KWVerifying>)firstVerifier verifier:(id<KWVerifying>)secondVerifier;

@end
