#import <Fox/FOXRunner.h>
#import <Fox/FOXReporter.h>


@interface FOXStandardReporter : NSObject <FOXReporter>

- (instancetype)init;
- (instancetype)initWithFile:(FILE *)file;

@end
