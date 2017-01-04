//
//  NSDate+NSDate_Util.h
//
//  Created by Giuseppe Nucifora on 11/02/14.
//  Copyright (c) 2014 Giuseppe Nucifora. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kSunRiseMinutes         5*60
#define kSunSetMinutes          19*60

#define kMoonRiseMinutes        17*60
#define kMoonSetMinutes         7*60

static NSString *kNSDateHelperFormatFullDateWithTime                = @"MMM d, yyyy h:mm a";
static NSString *kNSDateHelperFormatFullDate                        = @"MMM d, yyyy";
static NSString *kNSDateHelperFormatShortDateWithTime               = @"MMM d h:mm a";
static NSString *kNSDateHelperFormatShortDate                       = @"MMM d";
static NSString *kNSDateHelperFormatWeekday                         = @"EEEE";
static NSString *kNSDateHelperFormatWeekdayWithTime                 = @"EEEE h:mm a";
static NSString *kNSDateHelperFormatTime                            = @"h:mm a";
static NSString *kNSDateHelperFormatTimeWithPrefix                  = @"'at' h:mm a";

static NSString *kNSDateHelperFormatSQLTime                         = @"HH:mm:ss";

static NSString *kNSDateHelperFormatSQLDate                         = @"yyyy-MM-dd";
static NSString *kNSDateHelperFormatSQLDate_shashSeparated          = @"yyyy/MM/dd";

static NSString *kNSDateHelperFormatSQLDateIT                       = @"dd-MM-yyyy";
static NSString *kNSDateHelperFormatSQLDateIT_shashSeparated        = @"dd/MM/yyyy";

static NSString *kNSDateHelperFormatSQLDateEN                       = @"MM-dd-yyyy";
static NSString *kNSDateHelperFormatSQLDateEN_shashSeparated        = @"MM/dd/yyyy";

static NSString *kNSDateHelperFormatSQLDateWithTime                 = @"yyyy-MM-dd HH:mm:ss";
static NSString *kNSDateHelperFormatSQLDateWithTime_shashSeparated  = @"yyyy/MM/dd HH:mm:ss";

static NSString *kNSDateHelperFormatSQLDateWithTimeIT                       = @"dd-MM-yyyy HH:mm:ss";
static NSString *kNSDateHelperFormatSQLDateWithTimeIT_shashSeparated        = @"dd/MM/yyyy HH:mm:ss";

static NSString *kNSDateHelperFormatSQLDateWithTimeEN                       = @"MM-dd-yyyy HH:mm:ss";
static NSString *kNSDateHelperFormatSQLDateWithTimeEN_shashSeparated        = @"MM/dd/yyyy HH:mm:ss";

static NSString *kNSDateHelperFormatSQLDateWithTimeZone = @"yyyy-MM-dd'T'HH:mm:ss'Z'";
static NSString *kNSDateHelperFormatSQLDateWithTimeZone_shashSeparated = @"yyyy/MM/dd'T'HH:mm:ss'Z'";

static NSString *kNSDateHelperFormatSQLDateWithTimeZoneEN = @"MM-dd-yyyy'T'HH:mm:ss'Z'";
static NSString *kNSDateHelperFormatSQLDateWithTimeZoneEN_shashSeparated = @"MM/dd/yyyy'T'HH:mm:ss'Z'";

static NSString *kNSDateHelperFormatSQLDateWithTimeZoneIT = @"dd-MM-yyyy'T'HH:mm:ss'Z'";
static NSString *kNSDateHelperFormatSQLDateWithTimeZoneIT_shashSeparated = @"dd/MM/yyyy'T'HH:mm:ss'Z'";

@interface NSDate (NSDate_Util)

+ (void)initializeStatics;

+ (NSCalendar *) sharedCalendar;
+ (NSDateFormatter *) sharedDateFormatter;

- (NSDate *) dateToNearestMinutes:(NSInteger)minutes;

- (NSDate *) dateByAddingMinutes:(NSInteger) dMinutes;
- (NSDate *) dateByAddingHours:(NSInteger) hours;
- (NSDate*) dateByAddingDays:(NSInteger) days;
- (NSDate*) dateByAddingYears:(NSInteger) years;

- (NSDate *) dateBySubtractingMinutes:(NSInteger) dMinutes;
- (NSDate *) dateBySubtractingHours:(NSInteger) hours;
- (NSDate *) dateBySubtractingDays:(NSInteger) days;
- (NSDate *) dateBySubtractingYears:(NSInteger) years;

- (NSDate *) dateAtStartOfDay;
- (NSDate *) dateAtEndOfDay;

- (NSInteger) minutesAfterDate:(NSDate *) aDate;
- (CGFloat) distanceInWeeksToDate:(NSDate *) anotherDate;
- (CGFloat) distanceInDaysToDate:(NSDate *) anotherDate;
- (CGFloat) distanceInHoursToDate:(NSDate *) anotherDate;
- (CGFloat) distanceInMinutesToDate:(NSDate *) anotherDate;
- (CGFloat) distanceInSeconsToDate:(NSDate *) anotherDate;

- (NSDate *) toLocalTime;
- (NSDate *) toGlobalTime;

- (BOOL) isSameYearAsDate:(NSDate *) aDate;
- (BOOL) isEarlierThanDate:(NSDate *) aDate;
- (BOOL) isLaterThanDate:(NSDate *) aDate;

- (NSUInteger) daysAgo;
- (NSUInteger) daysAgoAgainstMidnight;
- (NSString *) stringDaysAgo;
- (NSString *) stringDaysAgoAgainstMidnight:(BOOL)flag;
- (NSUInteger) monthDay;
- (NSUInteger) weekday;
- (NSUInteger) month;
- (NSUInteger) weekNumber;
- (NSUInteger) hour;
- (NSUInteger) minute;
- (NSUInteger) year;
- (long int) utcTimeStamp; //full seconds since
+ (NSDate *) dateFromString:(NSString *) string;
+ (NSDate *) dateFromString:(NSString *) string withFormat:(NSString *) format;
+ (NSDate *) dateFromString:(NSString *) string withFormat:(NSString *) format withTimeZone:(NSTimeZone*) timeZone;
+ (NSString *) stringFromDate:(NSDate *) date withFormat:(NSString *) string;
+ (NSString *) stringFromDate:(NSDate *) date;
+ (NSString *) stringForDisplayFromDate:(NSDate *) date;
+ (NSString *) stringForDisplayFromDate:(NSDate *) date prefixed:(BOOL) prefixed;
+ (NSString *) stringForDisplayFromDate:(NSDate *) date prefixed:(BOOL) prefixed alwaysDisplayTime:(BOOL)displayTime;
- (NSString *) monthSymbol;
- (NSString *) string;
- (NSString *) stringWithFormat:(NSString *) format;
- (NSString *) stringWithFormat:(NSString *) format timeZone:(NSTimeZone*) timezone;
- (NSString *) stringWithDateStyle:(NSDateFormatterStyle) dateStyle timeStyle:(NSDateFormatterStyle) timeStyle;
- (NSDate *) beginningOfWeek;
- (NSDate *) beginningOfDay;
- (NSDate *) endOfWeek;
+ (NSString *) dateFormatString;
+ (NSString *) timeFormatString;
+ (NSString *) timestampFormatString;
+ (NSString *) dbFormatString;

+ (NSString *) parseDateFormatFromString:(NSString *) dateString;

+ (NSString *) WCFStringFromDate:(NSDate*) date;

+ (NSArray*) getSlotTimesFromDate:(NSDate*) date distanceMinutes:(NSInteger) minutes;

- (BOOL)isSameDayAsDate:(NSDate*)otherDate;

+ (NSString *) getUniversalHourFromDateString:(NSString *) string formatterString:(NSString*) formatterString andUppercaseString:(BOOL) uppercaseString;
- (NSString *) getUniversalHourUppercaseString:(BOOL) uppercaseString;
- (NSString *) getNotificationUniversalHourUppercaseString:(BOOL) uppercaseString;

@end
