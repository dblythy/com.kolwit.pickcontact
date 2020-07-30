#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <ContactsUI/ContactsUI.h>
#import <Cordova/CDVPlugin.h>

@interface PickContacts : CDVPlugin <CNContactPickerDelegate>

@property(strong) NSString* callbackID;

- (void) chooseContacts:(CDVInvokedUrlCommand*)command;

@end
