//
//  XcodePrivate.h
//  GitDiff
//
//  Created by Christoffer Winterkvist on 30/10/14.
//  Copyright (c) 2014 zenangst. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface DVTTextDocumentLocation : NSObject
@property (readonly) NSRange characterRange;
@property (readonly) NSRange lineRange;
- (id)initWithDocumentURL:(id)a0 timestamp:(id)a1 lineRange:(_NSRange)a2;
@end

@interface IDESourceCodeComparisonEditor : NSObject
@property (readonly) NSTextView *keyTextView;
@end

@interface IDESourceCodeEditor : NSObject <NSTextViewDelegate>

@property (retain) NSDocument *document; // T@"IDEEditorDocument",&,V_document
@property (retain) NSTextView *textView;

- (long)_currentOneBasedLineNubmer;
- (long)_currentOneBasedLineNumber;
- (id)_documentLocationForLineNumber:(long)a0;
- (void)selectDocumentLocations:(id)a0 highlightSelection:(BOOL)a1;
- (void)selectAndHighlightDocumentLocations:(id)a1;
- (void)selectDocumentLocations:(id)a1;
@end

@interface IDEEditorContext : NSObject
- (id)editor;
@end

@interface IDEEditorArea : NSObject
- (id)lastActiveEditorContext;
@end

@interface IDEWorkspaceWindowController : NSWindowController
- (id)editorArea;
@end
