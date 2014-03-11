/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UITextView;

@interface ABPropertyNoteCell : ABPropertyCell {
    UITextView *_textView;
}

@property(retain) UITextView * textView;

- (void)_updateDisplayAndEditingControls;
- (id)contentViewConstraints;
- (id)contentViewEditingConstraints;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)performDefaultAction;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setValueTextAttributes:(id)arg1;
- (BOOL)shouldPerformDefaultAction;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)textView;
- (void)textViewChanged:(id)arg1;
- (void)textViewEditingDidEnd:(id)arg1;
- (void)tintColorDidChange;
- (void)updateWithPropertyItem:(id)arg1;

@end