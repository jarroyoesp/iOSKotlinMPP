#import <Foundation/Foundation.h>

@class GreetingResponse, GreetingResponseSuccess, GreetingResponseError, GreetingKotlinThrowable, GreetingCurrentWeather, GreetingClouds, GreetingCoord, GreetingMain, GreetingSys, GreetingWeather, GreetingWind, GreetingRain, GreetingCurrentWeatherCompanion, GreetingCurrentWeather$serializer, GreetingKotlinArray, GreetingMainCompanion, GreetingMain$serializer, GreetingWindCompanion, GreetingWind$serializer, GreetingWeatherCompanion, GreetingWeather$serializer, GreetingRainCompanion, GreetingRain$serializer, GreetingSysCompanion, GreetingSys$serializer, GreetingCloudsCompanion, GreetingClouds$serializer, GreetingCoordCompanion, GreetingCoord$serializer, GreetingLocation, GreetingLocationCompanion, GreetingLocation$serializer, GreetingWeatherApi, GreetingKotlinUnit, GreetingCalculator, GreetingCalculatorCompanion, GreetingProduct, GreetingFactory, GreetingLocation_, GreetingLocation_Companion, GreetingLocation_$serializer, GreetingPlatform, GreetingGreeting, GreetingKotlinx_serialization_runtime_nativeEnumDescriptor, GreetingKotlinx_serialization_runtime_nativeSerialKind, GreetingKotlinNothing, GreetingKotlinx_serialization_runtime_nativeUpdateMode, GreetingKotlinx_serialization_runtime_nativeSerialClassDescImpl, GreetingKotlinEnum;

@protocol GreetingKotlinx_serialization_runtime_nativeKSerializer, GreetingKotlinx_serialization_runtime_nativeGeneratedSerializer, GreetingKotlinx_serialization_runtime_nativeSerializationStrategy, GreetingKotlinx_serialization_runtime_nativeEncoder, GreetingKotlinx_serialization_runtime_nativeSerialDescriptor, GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy, GreetingKotlinx_serialization_runtime_nativeDecoder, GreetingKotlinIterator, GreetingKotlinx_serialization_runtime_nativeCompositeEncoder, GreetingKotlinx_serialization_runtime_nativeSerialModule, GreetingKotlinAnnotation, GreetingKotlinx_serialization_runtime_nativeCompositeDecoder, GreetingKotlinx_serialization_runtime_nativeSerialModuleCollector, GreetingKotlinKClass, GreetingKotlinComparable, GreetingKotlinKDeclarationContainer, GreetingKotlinKAnnotatedElement, GreetingKotlinKClassifier;

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
__attribute__((swift_name("CurrentWeather.Companion")))
@interface GreetingCurrentWeatherCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<GreetingKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerializationStrategy")))
@protocol GreetingKotlinx_serialization_runtime_nativeSerializationStrategy
@required
- (void)serializeEncoder:(id<GreetingKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDeserializationStrategy")))
@protocol GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeKSerializer")))
@protocol GreetingKotlinx_serialization_runtime_nativeKSerializer <GreetingKotlinx_serialization_runtime_nativeSerializationStrategy, GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeGeneratedSerializer")))
@protocol GreetingKotlinx_serialization_runtime_nativeGeneratedSerializer <GreetingKotlinx_serialization_runtime_nativeKSerializer>
@required
- (GreetingKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrentWeather.$serializer")))
@interface GreetingCurrentWeather$serializer : KotlinBase <GreetingKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (GreetingCurrentWeather *)deserializeDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (GreetingCurrentWeather *)patchDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder old:(GreetingCurrentWeather *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<GreetingKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(GreetingCurrentWeather *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
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
__attribute__((swift_name("Main.Companion")))
@interface GreetingMainCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<GreetingKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Main.$serializer")))
@interface GreetingMain$serializer : KotlinBase <GreetingKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (GreetingMain *)deserializeDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (GreetingMain *)patchDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder old:(GreetingMain *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<GreetingKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(GreetingMain *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
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
__attribute__((swift_name("Wind.Companion")))
@interface GreetingWindCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<GreetingKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wind.$serializer")))
@interface GreetingWind$serializer : KotlinBase <GreetingKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (GreetingWind *)deserializeDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (GreetingWind *)patchDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder old:(GreetingWind *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<GreetingKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(GreetingWind *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
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
__attribute__((swift_name("Weather.Companion")))
@interface GreetingWeatherCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<GreetingKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Weather.$serializer")))
@interface GreetingWeather$serializer : KotlinBase <GreetingKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (GreetingWeather *)deserializeDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (GreetingWeather *)patchDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder old:(GreetingWeather *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<GreetingKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(GreetingWeather *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
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
__attribute__((swift_name("Rain.Companion")))
@interface GreetingRainCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<GreetingKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rain.$serializer")))
@interface GreetingRain$serializer : KotlinBase <GreetingKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (GreetingRain *)deserializeDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (GreetingRain *)patchDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder old:(GreetingRain *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<GreetingKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(GreetingRain *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
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
__attribute__((swift_name("Sys.Companion")))
@interface GreetingSysCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<GreetingKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sys.$serializer")))
@interface GreetingSys$serializer : KotlinBase <GreetingKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (GreetingSys *)deserializeDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (GreetingSys *)patchDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder old:(GreetingSys *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<GreetingKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(GreetingSys *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
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
__attribute__((swift_name("Clouds.Companion")))
@interface GreetingCloudsCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<GreetingKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Clouds.$serializer")))
@interface GreetingClouds$serializer : KotlinBase <GreetingKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (GreetingClouds *)deserializeDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (GreetingClouds *)patchDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder old:(GreetingClouds *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<GreetingKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(GreetingClouds *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
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
__attribute__((swift_name("Coord.Companion")))
@interface GreetingCoordCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<GreetingKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Coord.$serializer")))
@interface GreetingCoord$serializer : KotlinBase <GreetingKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (GreetingCoord *)deserializeDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (GreetingCoord *)patchDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder old:(GreetingCoord *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<GreetingKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(GreetingCoord *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
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
__attribute__((swift_name("Location.Companion")))
@interface GreetingLocationCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<GreetingKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location.$serializer")))
@interface GreetingLocation$serializer : KotlinBase <GreetingKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (GreetingLocation *)deserializeDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (GreetingLocation *)patchDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder old:(GreetingLocation *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<GreetingKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(GreetingLocation *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherApi")))
@interface GreetingWeatherApi : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getCurrentWeatherSuccess:(GreetingKotlinUnit *(^)(GreetingCurrentWeather *))success failure:(GreetingKotlinUnit *(^)(GreetingKotlinThrowable * _Nullable))failure __attribute__((swift_name("getCurrentWeather(success:failure:)")));
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
__attribute__((swift_name("Location_.Companion")))
@interface GreetingLocation_Companion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<GreetingKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location_.$serializer")))
@interface GreetingLocation_$serializer : KotlinBase <GreetingKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (GreetingLocation_ *)deserializeDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (GreetingLocation_ *)patchDecoder:(id<GreetingKotlinx_serialization_runtime_nativeDecoder>)decoder old:(GreetingLocation_ *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<GreetingKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(GreetingLocation_ *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
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

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEncoder")))
@protocol GreetingKotlinx_serialization_runtime_nativeEncoder
@required
- (id<GreetingKotlinx_serialization_runtime_nativeCompositeEncoder>)beginCollectionDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(GreetingKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<GreetingKotlinx_serialization_runtime_nativeCompositeEncoder>)beginStructureDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(GreetingKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(GreetingKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<GreetingKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<GreetingKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<GreetingKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialDescriptor")))
@protocol GreetingKotlinx_serialization_runtime_nativeSerialDescriptor
@required
- (NSArray<id<GreetingKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<GreetingKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) GreetingKotlinx_serialization_runtime_nativeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDecoder")))
@protocol GreetingKotlinx_serialization_runtime_nativeDecoder
@required
- (id<GreetingKotlinx_serialization_runtime_nativeCompositeDecoder>)beginStructureDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(GreetingKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(GreetingKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (GreetingKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<GreetingKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) GreetingKotlinx_serialization_runtime_nativeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface GreetingKotlinUnit : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol GreetingKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeEncoder")))
@protocol GreetingKotlinx_serialization_runtime_nativeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<GreetingKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<GreetingKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<GreetingKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialClassDescImpl")))
@interface GreetingKotlinx_serialization_runtime_nativeSerialClassDescImpl : KotlinBase <GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<GreetingKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer));
- (void)addElementName:(NSString *)name isOptional:(BOOL)isOptional __attribute__((swift_name("addElement(name:isOptional:)")));
- (void)pushAnnotationA:(id<GreetingKotlinAnnotation>)a __attribute__((swift_name("pushAnnotation(a:)")));
- (void)pushClassAnnotationA:(id<GreetingKotlinAnnotation>)a __attribute__((swift_name("pushClassAnnotation(a:)")));
- (void)pushDescriptorDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("pushDescriptor(desc:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEnumDescriptor")))
@interface GreetingKotlinx_serialization_runtime_nativeEnumDescriptor : GreetingKotlinx_serialization_runtime_nativeSerialClassDescImpl
- (instancetype)initWithName:(NSString *)name choices:(GreetingKotlinArray *)choices __attribute__((swift_name("init(name:choices:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<GreetingKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialModule")))
@protocol GreetingKotlinx_serialization_runtime_nativeSerialModule
@required
- (void)dumpToCollector:(id<GreetingKotlinx_serialization_runtime_nativeSerialModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<GreetingKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getContextualKclass:(id<GreetingKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<GreetingKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getPolymorphicBaseClass:(id<GreetingKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<GreetingKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getPolymorphicBaseClass:(id<GreetingKotlinKClass>)baseClass serializedClassName:(NSString *)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol GreetingKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialKind")))
@interface GreetingKotlinx_serialization_runtime_nativeSerialKind : KotlinBase
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeDecoder")))
@protocol GreetingKotlinx_serialization_runtime_nativeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<GreetingKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<GreetingKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<GreetingKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) GreetingKotlinx_serialization_runtime_nativeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface GreetingKotlinNothing : KotlinBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol GreetingKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface GreetingKotlinEnum : KotlinBase <GreetingKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(GreetingKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeUpdateMode")))
@interface GreetingKotlinx_serialization_runtime_nativeUpdateMode : GreetingKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) GreetingKotlinx_serialization_runtime_nativeUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) GreetingKotlinx_serialization_runtime_nativeUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) GreetingKotlinx_serialization_runtime_nativeUpdateMode *update __attribute__((swift_name("update")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(GreetingKotlinx_serialization_runtime_nativeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialModuleCollector")))
@protocol GreetingKotlinx_serialization_runtime_nativeSerialModuleCollector
@required
- (void)contextualKClass:(id<GreetingKotlinKClass>)kClass serializer:(id<GreetingKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<GreetingKotlinKClass>)baseClass actualClass:(id<GreetingKotlinKClass>)actualClass actualSerializer:(id<GreetingKotlinx_serialization_runtime_nativeKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol GreetingKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol GreetingKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol GreetingKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol GreetingKotlinKClass <GreetingKotlinKDeclarationContainer, GreetingKotlinKAnnotatedElement, GreetingKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

NS_ASSUME_NONNULL_END
