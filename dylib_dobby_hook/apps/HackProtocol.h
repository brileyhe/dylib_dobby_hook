//
//  hook_protocol.h
//  dylib_dobby_hook
//
//  Created by artemis on 2024/1/15.
//

@protocol HackProtocol

- (NSString *)getAppName;
- (NSString *)getSupportAppVersion;
- (BOOL)hack;
@end


@interface NSObject (HackProtocolDefaults) <HackProtocol>
- (void)ret;
- (void)ret_;
- (void)ret__;

- (int)ret1;
- (int)ret0;
+ (int)ret1;
+ (int)ret0;

@end

@implementation NSObject (HackProtocolDefaults)

- (void)ret {
    NSLog(@">>>>>> called - ret");
}
- (void)ret_ {
    NSLog(@">>>>>> called - ret_");
}
- (void)ret__ {
    NSLog(@">>>>>> called - ret__");
}

- (int)ret1 {
    NSLog(@">>>>>> called - ret1");
    return 1;
}
- (int)ret0 {
    NSLog(@">>>>>> called - ret0");
    return 0;
}
+ (int)ret1 {
    NSLog(@">>>>>> called + ret1");
    return 1;
}
+ (int)ret0 {
    NSLog(@">>>>>> called + ret0");
    return 0;
}
+ (void)ret {
    NSLog(@">>>>>> called + ret");
}


@end
