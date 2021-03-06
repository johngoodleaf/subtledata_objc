#import <Foundation/Foundation.h>
#import "NIKSwaggerObject.h"

@interface SDNewUserDetails : NIKSwaggerObject

@property(nonatomic) NSString* first_name;
@property(nonatomic) NSString* last_name;
@property(nonatomic) NSString* middle_name;
@property(nonatomic) NSString* device_uuid;
@property(nonatomic) NSString* dob;
@property(nonatomic) NSString* email_address;
@property(nonatomic) NSNumber* longitude;
@property(nonatomic) NSString* cell_phone;
@property(nonatomic) NSNumber* latitude;
@property(nonatomic) NSString* password;
@property(nonatomic) NSString* user_name;
- (id) first_name: (NSString*) first_name
     last_name: (NSString*) last_name
     middle_name: (NSString*) middle_name
     device_uuid: (NSString*) device_uuid
     dob: (NSString*) dob
     email_address: (NSString*) email_address
     longitude: (NSNumber*) longitude
     cell_phone: (NSString*) cell_phone
     latitude: (NSNumber*) latitude
     password: (NSString*) password
     user_name: (NSString*) user_name;

- (id) initWithValues: (NSDictionary*)dict;
- (NSDictionary*) asDictionary;


@end

