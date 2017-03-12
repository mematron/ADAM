//
//  AppController.h
//  adam
//
//  Created by technasis on 12/22/09.
//  Copyright __MyCompanyName__ 2009 . All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Quartz/Quartz.h>

@interface AppController : NSObject 
{
    IBOutlet QCView* qcView;
}

- (IBAction) changeColorToBlue:(id)sender;
- (void)setPresentationOptions:(NSApplicationPresentationOptions)NSApplicationPresentationAutoHideMenuBar

