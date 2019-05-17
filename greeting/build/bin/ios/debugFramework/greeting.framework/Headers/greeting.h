#import <Foundation/Foundation.h>

@class GreetingResponse, GreetingResponseSuccess, GreetingResponseError, GreetingKotlinThrowable, GreetingCurrentWeather, GreetingClouds, GreetingCoord, GreetingMain, GreetingSys, GreetingWeather, GreetingWind, GreetingRain, GreetingLocation, GreetingWeatherApi, GreetingKotlinUnit, GreetingCalculator, GreetingCalculatorCompanion, GreetingProduct, GreetingFactory, GreetingLocation_, GreetingPlatform, GreetingGreeting, GreetingKotlinArray;

@protocol GreetingKotlinIterator;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface GreetingMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface GreetingMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface GreetingNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface GreetingByte : GreetingNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface GreetingUByte : GreetingNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface GreetingShort : GreetingNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface GreetingUShort : GreetingNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface GreetingInt : GreetingNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface GreetingUInt : GreetingNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface GreetingLong : GreetingNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface GreetingULong : GreetingNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface GreetingFloat : GreetingNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface GreetingDouble : GreetingNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface GreetingBoolean : GreetingNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("Response")))
@interface GreetingResponse : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Response.Success")))
@interface GreetingResponseSuccess : GreetingResponse
- (instancetype)initWithData:(id _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id _Nullable data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Response.Error")))
@interface GreetingResponseError : GreetingResponse
- (instancetype)initWithException:(GreetingKotlinThrowable *)exception __attribute__((swift_name("init(exception:)"))) __attribute__((objc_designated_initializer));
@property (readonly) GreetingKotlinThrowable *exception __attribute__((swift_name("exception")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrentWeather")))
@interface GreetingCurrentWeather : KotlinBase
- (instancetype)initWithBase:(NSString *)base clouds:(GreetingClouds * _Nullable)clouds cod:(int32_t)cod coord:(GreetingCoord * _Nullable)coord dt:(int32_t)dt id:(int32_t)id main:(GreetingMain * _Nullable)main name:(NSString *)name sys:(GreetingSys * _Nullable)sys weather:(NSMutableArray<GreetingWeather *> * _Nullable)weather wind:(GreetingWind * _Nullable)wind __attribute__((swift_name("init(base:clouds:cod:coord:dt:id:main:name:sys:weather:wind:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (GreetingClouds * _Nullable)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (GreetingCoord * _Nullable)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (GreetingMain * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (GreetingSys * _Nullable)component9 __attribute__((swift_name("component9()")));
- (NSMutableArray<GreetingWeather *> * _Nullable)component10 __attribute__((swift_name("component10()")));
- (GreetingWind * _Nullable)component11 __attribute__((swift_name("component11()")));
- (GreetingCurrentWeather *)doCopyBase:(NSString *)base clouds:(GreetingClouds * _Nullable)clouds cod:(int32_t)cod coord:(GreetingCoord * _Nullable)coord dt:(int32_t)dt id:(int32_t)id main:(GreetingMain * _Nullable)main name:(NSString *)name sys:(GreetingSys * _Nullable)sys weather:(NSMutableArray<GreetingWeather *> * _Nullable)weather wind:(GreetingWind * _Nullable)wind __attribute__((swift_name("doCopy(base:clouds:cod:coord:dt:id:main:name:sys:weather:wind:)")));
@property (readonly) GreetingRain * _Nullable rain __attribute__((swift_name("rain")));
@property (readonly) NSString *base __attribute__((swift_name("base")));
@property (readonly) GreetingClouds * _Nullable clouds __attribute__((swift_name("clouds")));
@property (readonly) int32_t cod __attribute__((swift_name("cod")));
@property (readonly) GreetingCoord * _Nullable coord __attribute__((swift_name("coord")));
@property (readonly) int32_t dt __attribute__((swift_name("dt")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) GreetingMain * _Nullable main __attribute__((swift_name("main")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) GreetingSys * _Nullable sys __attribute__((swift_name("sys")));
@property (readonly) NSMutableArray<GreetingWeather *> * _Nullable weather __attribute__((swift_name("weather")));
@property (readonly) GreetingWind * _Nullable wind __attribute__((swift_name("wind")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Main")))
@interface GreetingMain : KotlinBase
- (instancetype)initWithHumidity:(double)humidity pressure:(double)pressure temp:(double)temp temp_max:(double)temp_max temp_min:(double)temp_min __attribute__((swift_name("init(humidity:pressure:temp:temp_max:temp_min:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (double)component5 __attribute__((swift_name("component5()")));
- (GreetingMain *)doCopyHumidity:(double)humidity pressure:(double)pressure temp:(double)temp temp_max:(double)temp_max temp_min:(double)temp_min __attribute__((swift_name("doCopy(humidity:pressure:temp:temp_max:temp_min:)")));
@property (readonly) double humidity __attribute__((swift_name("humidity")));
@property (readonly) double pressure __attribute__((swift_name("pressure")));
@property (readonly) double temp __attribute__((swift_name("temp")));
@property (readonly) double temp_max __attribute__((swift_name("temp_max")));
@property (readonly) double temp_min __attribute__((swift_name("temp_min")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wind")))
@interface GreetingWind : KotlinBase
- (instancetype)initWithDeg:(double)deg speed:(double)speed __attribute__((swift_name("init(deg:speed:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (GreetingWind *)doCopyDeg:(double)deg speed:(double)speed __attribute__((swift_name("doCopy(deg:speed:)")));
@property (readonly) double deg __attribute__((swift_name("deg")));
@property (readonly) double speed __attribute__((swift_name("speed")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Weather")))
@interface GreetingWeather : KotlinBase
- (instancetype)initWithDescription:(NSString *)description icon:(NSString *)icon id:(int32_t)id main:(NSString *)main __attribute__((swift_name("init(description:icon:id:main:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (GreetingWeather *)doCopyDescription:(NSString *)description icon:(NSString *)icon id:(int32_t)id main:(NSString *)main __attribute__((swift_name("doCopy(description:icon:id:main:)")));
@property (readonly, getter=description_) NSString *description __attribute__((swift_name("description")));
@property (readonly) NSString *icon __attribute__((swift_name("icon")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *main __attribute__((swift_name("main")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rain")))
@interface GreetingRain : KotlinBase
- (instancetype)initWithH:(int32_t)h __attribute__((swift_name("init(h:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (GreetingRain *)doCopyH:(int32_t)h __attribute__((swift_name("doCopy(h:)")));
@property (readonly) int32_t h __attribute__((swift_name("h")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sys")))
@interface GreetingSys : KotlinBase
- (instancetype)initWithCountry:(NSString *)country id:(int32_t)id message:(double)message sunrise:(int32_t)sunrise sunset:(int32_t)sunset type:(int32_t)type __attribute__((swift_name("init(country:id:message:sunrise:sunset:type:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (GreetingSys *)doCopyCountry:(NSString *)country id:(int32_t)id message:(double)message sunrise:(int32_t)sunrise sunset:(int32_t)sunset type:(int32_t)type __attribute__((swift_name("doCopy(country:id:message:sunrise:sunset:type:)")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) double message __attribute__((swift_name("message")));
@property (readonly) int32_t sunrise __attribute__((swift_name("sunrise")));
@property (readonly) int32_t sunset __attribute__((swift_name("sunset")));
@property (readonly) int32_t type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Clouds")))
@interface GreetingClouds : KotlinBase
- (instancetype)initWithAll:(int32_t)all __attribute__((swift_name("init(all:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (GreetingClouds *)doCopyAll:(int32_t)all __attribute__((swift_name("doCopy(all:)")));
@property (readonly) int32_t all __attribute__((swift_name("all")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Coord")))
@interface GreetingCoord : KotlinBase
- (instancetype)initWithLat:(double)lat lon:(double)lon __attribute__((swift_name("init(lat:lon:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (GreetingCoord *)doCopyLat:(double)lat lon:(double)lon __attribute__((swift_name("doCopy(lat:lon:)")));
@property (readonly) double lat __attribute__((swift_name("lat")));
@property (readonly) double lon __attribute__((swift_name("lon")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location")))
@interface GreetingLocation : KotlinBase
- (instancetype)initWithCityName:(NSString *)cityName country:(NSString *)country __attribute__((swift_name("init(cityName:country:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (GreetingLocation *)doCopyCityName:(NSString *)cityName country:(NSString *)country __attribute__((swift_name("doCopy(cityName:country:)")));
@property (readonly) NSString *cityName __attribute__((swift_name("cityName")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherApi")))
@interface GreetingWeatherApi : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getCurrentWeatherSuccess:(GreetingKotlinUnit *(^)(NSString *))success failure:(GreetingKotlinUnit *(^)(GreetingKotlinThrowable * _Nullable))failure __attribute__((swift_name("getCurrentWeather(success:failure:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Calculator")))
@interface GreetingCalculator : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Calculator.Companion")))
@interface GreetingCalculatorCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (int32_t)sumA:(int32_t)a b:(int32_t)b __attribute__((swift_name("sum(a:b:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Product")))
@interface GreetingProduct : KotlinBase
- (instancetype)initWithUser:(NSString *)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
- (void)iosSpecificOperation __attribute__((swift_name("iosSpecificOperation()")));
@property (readonly) NSString *model __attribute__((swift_name("model")));
@property (readonly) NSString *user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Factory")))
@interface GreetingFactory : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)factory __attribute__((swift_name("init()")));
- (GreetingProduct *)createConfig:(NSDictionary<NSString *, NSString *> *)config __attribute__((swift_name("create(config:)")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location_")))
@interface GreetingLocation_ : KotlinBase
- (instancetype)initWithCityName:(NSString *)cityName country:(NSString *)country __attribute__((swift_name("init(cityName:country:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (GreetingLocation_ *)doCopyCityName:(NSString *)cityName country:(NSString *)country __attribute__((swift_name("doCopy(cityName:country:)")));
@property NSString *cityName __attribute__((swift_name("cityName")));
@property NSString *country __attribute__((swift_name("country")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface GreetingPlatform : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface GreetingGreeting : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface GreetingKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GreetingKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GreetingKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (GreetingKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
@property (readonly) GreetingKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface GreetingKotlinUnit : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface GreetingKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(GreetingInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<GreetingKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol GreetingKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

NS_ASSUME_NONNULL_END
