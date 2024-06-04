#import <Fox/FOXRunner.h>
#import <Fox/FOXReporter.h>

@interface FOXDebugReporter : NSObject <FOXReporter>

- (instancetype)init;
- (instancetype)initWithFile:(FILE *)file;

@end
