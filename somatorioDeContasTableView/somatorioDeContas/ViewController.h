//
//  ViewController.h
//  somatorioDeContas
//
//  Created by vinicius quaiato on 5/20/12.
//  Copyright (c) 2012 Vinicius Quaiato. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Gastos.h"

@interface ViewController : UIViewController<UITextFieldDelegate>
{
    Gastos* gastos;
}

- (IBAction)addGasto:(id)sender;
- (IBAction)verListaDeValores:(id)sender;
@property (nonatomic,retain) IBOutlet UILabel* totalDosGastos;
@property (nonatomic,retain) IBOutlet UILabel* numeroDeGastos;
@property (nonatomic,retain) IBOutlet UITextField* valorDoGasto;
@end
