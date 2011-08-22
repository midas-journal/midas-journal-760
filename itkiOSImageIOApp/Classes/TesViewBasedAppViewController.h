//	Copyright 2010 Boris Shabash, Ghassan Hamarneh, Zhi Feng Huang, and Luis Ibanez
//	
//	Licensed under the Apache License, Version 2.0 (the "License");
//	you may not use this file except in compliance with the License.
//	You may obtain a copy of the License at
//
//	http://www.apache.org/licenses/LICENSE-2.0
//
//	Unless required by applicable law or agreed to in writing, software
//	distributed under the License is distributed on an "AS IS" BASIS,
//	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//	See the License for the specific language governing permissions and
//	limitations under the License.



#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#include <iostream>
#include "itkiOSImageIO.h"
#include "ItkImage.h"
#include "itkImportImageFilter.h"
#include "itkImageFileReader.h" 
#include "itkImageFileWriter.h" 
#include "itkRGBPixel.h"
#include "itkRGBAPixel.h"
#include "itkRescaleIntensityImageFilter.h" 
#include "itkBinaryThresholdImageFilter.h" 
#include "itkRGBToLuminanceImageFilter.h"

@interface TesViewBasedAppViewController : UIViewController {
    IBOutlet UIButton *button;
    IBOutlet UIImageView *image;
    IBOutlet UIButton *filterButton;
	UIImagePickerController *imagePicker;
	UIImage* currentImage;
}
- (IBAction)grabImage;
- (IBAction)performFiltering;

@property(nonatomic,retain) UIImagePickerController *imagePicker;

- (void)imagePickerController:(UIImagePickerController *)picker 
		didFinishPickingImage:(UIImage *)img 
				  editingInfo:(NSDictionary *)editInfo;
@end
