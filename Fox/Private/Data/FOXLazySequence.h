#import "FOXSequence.h"


typedef id<FOXSequence>(^FOXLazySequenceBlock)(void);

@interface FOXLazySequence : FOXSequence

- (instancetype)init;
- (instancetype)initWithLazyBlock:(FOXLazySequenceBlock)block;

@end
