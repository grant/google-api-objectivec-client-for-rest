// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   AdSense Management API (adsense/v1.4)
// Description:
//   Accesses AdSense publishers' inventory and generates performance reports.
// Documentation:
//   https://developers.google.com/adsense/management/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRAdSense_Account;
@class GTLRAdSense_AdClient;
@class GTLRAdSense_AdsenseReportsGenerateResponse_Headers_Item;
@class GTLRAdSense_AdStyle;
@class GTLRAdSense_AdStyle_Colors;
@class GTLRAdSense_AdStyle_Font;
@class GTLRAdSense_AdUnit;
@class GTLRAdSense_AdUnit_ContentAdsSettings;
@class GTLRAdSense_AdUnit_ContentAdsSettings_BackupOption;
@class GTLRAdSense_AdUnit_FeedAdsSettings;
@class GTLRAdSense_AdUnit_MobileContentAdsSettings;
@class GTLRAdSense_Alert;
@class GTLRAdSense_CustomChannel;
@class GTLRAdSense_CustomChannel_TargetingInfo;
@class GTLRAdSense_Payment;
@class GTLRAdSense_ReportingMetadataEntry;
@class GTLRAdSense_SavedAdStyle;
@class GTLRAdSense_SavedReport;
@class GTLRAdSense_UrlChannel;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  GTLRAdSense_Account
 */
@interface GTLRAdSense_Account : GTLRObject

/**
 *  creationTime
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *creationTime;

/**
 *  Unique identifier of this account.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Kind of resource this is, in this case adsense#account. */
@property(nonatomic, copy, nullable) NSString *kind;

/** Name of this account. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Whether this account is premium.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *premium;

/** Sub accounts of the this account. */
@property(nonatomic, strong, nullable) NSArray<GTLRAdSense_Account *> *subAccounts;

/** AdSense timezone of this account. */
@property(nonatomic, copy, nullable) NSString *timezone;

@end


/**
 *  GTLRAdSense_Accounts
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAdSense_Accounts : GTLRCollectionObject

/** ETag of this response for caching purposes. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The accounts returned in this list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdSense_Account *> *items;

/** Kind of list this is, in this case adsense#accounts. */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  Continuation token used to page through accounts. To retrieve the next page
 *  of results, set the next request's "pageToken" value to this.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRAdSense_AdClient
 */
@interface GTLRAdSense_AdClient : GTLRObject

/**
 *  Whether this ad client is opted in to ARC.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *arcOptIn;

/**
 *  Unique identifier of this ad client.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Kind of resource this is, in this case adsense#adClient. */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  This ad client's product code, which corresponds to the PRODUCT_CODE report
 *  dimension.
 */
@property(nonatomic, copy, nullable) NSString *productCode;

/**
 *  Whether this ad client supports being reported on.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *supportsReporting;

@end


/**
 *  GTLRAdSense_AdClients
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAdSense_AdClients : GTLRCollectionObject

/** ETag of this response for caching purposes. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The ad clients returned in this list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdSense_AdClient *> *items;

/** Kind of list this is, in this case adsense#adClients. */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  Continuation token used to page through ad clients. To retrieve the next
 *  page of results, set the next request's "pageToken" value to this.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRAdSense_AdCode
 */
@interface GTLRAdSense_AdCode : GTLRObject

/** The ad code snippet. */
@property(nonatomic, copy, nullable) NSString *adCode;

/** Kind this is, in this case adsense#adCode. */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  GTLRAdSense_AdsenseReportsGenerateResponse
 */
@interface GTLRAdSense_AdsenseReportsGenerateResponse : GTLRObject

/**
 *  The averages of the report. This is the same length as any other row in the
 *  report; cells corresponding to dimension columns are empty.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *averages;

/** The requested end date in yyyy-mm-dd format. */
@property(nonatomic, copy, nullable) NSString *endDate;

/**
 *  The header information of the columns requested in the report. This is a
 *  list of headers; one for each dimension in the request, followed by one for
 *  each metric in the request.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdSense_AdsenseReportsGenerateResponse_Headers_Item *> *headers;

/** Kind this is, in this case adsense#report. */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The output rows of the report. Each row is a list of cells; one for each
 *  dimension in the request, followed by one for each metric in the request.
 *  The dimension cells contain strings, and the metric cells contain numbers.
 */
@property(nonatomic, strong, nullable) NSArray<NSArray<NSString *> *> *rows;

/** The requested start date in yyyy-mm-dd format. */
@property(nonatomic, copy, nullable) NSString *startDate;

/**
 *  The total number of rows matched by the report request. Fewer rows may be
 *  returned in the response due to being limited by the row count requested or
 *  the report row limit.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *totalMatchedRows;

/**
 *  The totals of the report. This is the same length as any other row in the
 *  report; cells corresponding to dimension columns are empty.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *totals;

/** Any warnings associated with generation of the report. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *warnings;

@end


/**
 *  GTLRAdSense_AdsenseReportsGenerateResponse_Headers_Item
 */
@interface GTLRAdSense_AdsenseReportsGenerateResponse_Headers_Item : GTLRObject

/**
 *  The currency of this column. Only present if the header type is
 *  METRIC_CURRENCY.
 */
@property(nonatomic, copy, nullable) NSString *currency;

/** The name of the header. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The type of the header; one of DIMENSION, METRIC_TALLY, METRIC_RATIO, or
 *  METRIC_CURRENCY.
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  GTLRAdSense_AdStyle
 */
@interface GTLRAdSense_AdStyle : GTLRObject

/**
 *  The colors which are included in the style. These are represented as six
 *  hexadecimal characters, similar to HTML color codes, but without the leading
 *  hash.
 */
@property(nonatomic, strong, nullable) GTLRAdSense_AdStyle_Colors *colors;

/**
 *  The style of the corners in the ad (deprecated: never populated, ignored).
 */
@property(nonatomic, copy, nullable) NSString *corners;

/** The font which is included in the style. */
@property(nonatomic, strong, nullable) GTLRAdSense_AdStyle_Font *font;

/** Kind this is, in this case adsense#adStyle. */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  The colors which are included in the style. These are represented as six
 *  hexadecimal characters, similar to HTML color codes, but without the leading
 *  hash.
 */
@interface GTLRAdSense_AdStyle_Colors : GTLRObject

/** The color of the ad background. */
@property(nonatomic, copy, nullable) NSString *background;

/** The color of the ad border. */
@property(nonatomic, copy, nullable) NSString *border;

/** The color of the ad text. */
@property(nonatomic, copy, nullable) NSString *text;

/** The color of the ad title. */
@property(nonatomic, copy, nullable) NSString *title;

/** The color of the ad url. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  The font which is included in the style.
 */
@interface GTLRAdSense_AdStyle_Font : GTLRObject

/** The family of the font. */
@property(nonatomic, copy, nullable) NSString *family;

/** The size of the font. */
@property(nonatomic, copy, nullable) NSString *size;

@end


/**
 *  GTLRAdSense_AdUnit
 */
@interface GTLRAdSense_AdUnit : GTLRObject

/**
 *  Identity code of this ad unit, not necessarily unique across ad clients.
 */
@property(nonatomic, copy, nullable) NSString *code;

/**
 *  Settings specific to content ads (AFC) and highend mobile content ads (AFMC
 *  - deprecated).
 */
@property(nonatomic, strong, nullable) GTLRAdSense_AdUnit_ContentAdsSettings *contentAdsSettings;

/** Custom style information specific to this ad unit. */
@property(nonatomic, strong, nullable) GTLRAdSense_AdStyle *customStyle;

/** Settings specific to feed ads (AFF) - deprecated. */
@property(nonatomic, strong, nullable) GTLRAdSense_AdUnit_FeedAdsSettings *feedAdsSettings;

/**
 *  Unique identifier of this ad unit. This should be considered an opaque
 *  identifier; it is not safe to rely on it being in any particular format.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Kind of resource this is, in this case adsense#adUnit. */
@property(nonatomic, copy, nullable) NSString *kind;

/** Settings specific to WAP mobile content ads (AFMC) - deprecated. */
@property(nonatomic, strong, nullable) GTLRAdSense_AdUnit_MobileContentAdsSettings *mobileContentAdsSettings;

/** Name of this ad unit. */
@property(nonatomic, copy, nullable) NSString *name;

/** ID of the saved ad style which holds this ad unit's style information. */
@property(nonatomic, copy, nullable) NSString *savedStyleId;

/**
 *  Status of this ad unit. Possible values are:
 *  NEW: Indicates that the ad unit was created within the last seven days and
 *  does not yet have any activity associated with it.
 *  ACTIVE: Indicates that there has been activity on this ad unit in the last
 *  seven days.
 *  INACTIVE: Indicates that there has been no activity on this ad unit in the
 *  last seven days.
 */
@property(nonatomic, copy, nullable) NSString *status;

@end


/**
 *  Settings specific to content ads (AFC) and highend mobile content ads (AFMC
 *  - deprecated).
 */
@interface GTLRAdSense_AdUnit_ContentAdsSettings : GTLRObject

/** The backup option to be used in instances where no ad is available. */
@property(nonatomic, strong, nullable) GTLRAdSense_AdUnit_ContentAdsSettings_BackupOption *backupOption;

/** Size of this ad unit. */
@property(nonatomic, copy, nullable) NSString *size;

/** Type of this ad unit. */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  Settings specific to feed ads (AFF) - deprecated.
 */
@interface GTLRAdSense_AdUnit_FeedAdsSettings : GTLRObject

/** The position of the ads relative to the feed entries. */
@property(nonatomic, copy, nullable) NSString *adPosition;

/**
 *  The frequency at which ads should appear in the feed (i.e. every N entries).
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *frequency;

/**
 *  The minimum length an entry should be in order to have attached ads.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *minimumWordCount;

/** The type of ads which should appear. */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  Settings specific to WAP mobile content ads (AFMC) - deprecated.
 */
@interface GTLRAdSense_AdUnit_MobileContentAdsSettings : GTLRObject

/** The markup language to use for this ad unit. */
@property(nonatomic, copy, nullable) NSString *markupLanguage;

/** The scripting language to use for this ad unit. */
@property(nonatomic, copy, nullable) NSString *scriptingLanguage;

/** Size of this ad unit. */
@property(nonatomic, copy, nullable) NSString *size;

/** Type of this ad unit. */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  The backup option to be used in instances where no ad is available.
 */
@interface GTLRAdSense_AdUnit_ContentAdsSettings_BackupOption : GTLRObject

/** Color to use when type is set to COLOR. */
@property(nonatomic, copy, nullable) NSString *color;

/** Type of the backup option. Possible values are BLANK, COLOR and URL. */
@property(nonatomic, copy, nullable) NSString *type;

/** URL to use when type is set to URL. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  GTLRAdSense_AdUnits
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAdSense_AdUnits : GTLRCollectionObject

/** ETag of this response for caching purposes. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The ad units returned in this list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdSense_AdUnit *> *items;

/** Kind of list this is, in this case adsense#adUnits. */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  Continuation token used to page through ad units. To retrieve the next page
 *  of results, set the next request's "pageToken" value to this.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRAdSense_Alert
 */
@interface GTLRAdSense_Alert : GTLRObject

/**
 *  Unique identifier of this alert. This should be considered an opaque
 *  identifier; it is not safe to rely on it being in any particular format.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Whether this alert can be dismissed.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *isDismissible;

/** Kind of resource this is, in this case adsense#alert. */
@property(nonatomic, copy, nullable) NSString *kind;

/** The localized alert message. */
@property(nonatomic, copy, nullable) NSString *message;

/** Severity of this alert. Possible values: INFO, WARNING, SEVERE. */
@property(nonatomic, copy, nullable) NSString *severity;

/**
 *  Type of this alert. Possible values: SELF_HOLD, MIGRATED_TO_BILLING3,
 *  ADDRESS_PIN_VERIFICATION, PHONE_PIN_VERIFICATION, CORPORATE_ENTITY,
 *  GRAYLISTED_PUBLISHER, API_HOLD.
 */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  GTLRAdSense_Alerts
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property.
 */
@interface GTLRAdSense_Alerts : GTLRCollectionObject

/**
 *  The alerts returned in this list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdSense_Alert *> *items;

/** Kind of list this is, in this case adsense#alerts. */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  GTLRAdSense_CustomChannel
 */
@interface GTLRAdSense_CustomChannel : GTLRObject

/** Code of this custom channel, not necessarily unique across ad clients. */
@property(nonatomic, copy, nullable) NSString *code;

/**
 *  Unique identifier of this custom channel. This should be considered an
 *  opaque identifier; it is not safe to rely on it being in any particular
 *  format.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Kind of resource this is, in this case adsense#customChannel. */
@property(nonatomic, copy, nullable) NSString *kind;

/** Name of this custom channel. */
@property(nonatomic, copy, nullable) NSString *name;

/** The targeting information of this custom channel, if activated. */
@property(nonatomic, strong, nullable) GTLRAdSense_CustomChannel_TargetingInfo *targetingInfo;

@end


/**
 *  The targeting information of this custom channel, if activated.
 */
@interface GTLRAdSense_CustomChannel_TargetingInfo : GTLRObject

/** The name used to describe this channel externally. */
@property(nonatomic, copy, nullable) NSString *adsAppearOn;

/**
 *  The external description of the channel.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  The locations in which ads appear. (Only valid for content and mobile
 *  content ads (deprecated)). Acceptable values for content ads are: TOP_LEFT,
 *  TOP_CENTER, TOP_RIGHT, MIDDLE_LEFT, MIDDLE_CENTER, MIDDLE_RIGHT,
 *  BOTTOM_LEFT, BOTTOM_CENTER, BOTTOM_RIGHT, MULTIPLE_LOCATIONS. Acceptable
 *  values for mobile content ads (deprecated) are: TOP, MIDDLE, BOTTOM,
 *  MULTIPLE_LOCATIONS.
 */
@property(nonatomic, copy, nullable) NSString *location;

/** The language of the sites ads will be displayed on. */
@property(nonatomic, copy, nullable) NSString *siteLanguage;

@end


/**
 *  GTLRAdSense_CustomChannels
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAdSense_CustomChannels : GTLRCollectionObject

/** ETag of this response for caching purposes. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The custom channels returned in this list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdSense_CustomChannel *> *items;

/** Kind of list this is, in this case adsense#customChannels. */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  Continuation token used to page through custom channels. To retrieve the
 *  next page of results, set the next request's "pageToken" value to this.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRAdSense_Metadata
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property.
 */
@interface GTLRAdSense_Metadata : GTLRCollectionObject

/**
 *  items
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdSense_ReportingMetadataEntry *> *items;

/** Kind of list this is, in this case adsense#metadata. */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  GTLRAdSense_Payment
 */
@interface GTLRAdSense_Payment : GTLRObject

/**
 *  Unique identifier of this Payment.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Kind of resource this is, in this case adsense#payment. */
@property(nonatomic, copy, nullable) NSString *kind;

/** The amount to be paid. */
@property(nonatomic, copy, nullable) NSString *paymentAmount;

/** The currency code for the amount to be paid. */
@property(nonatomic, copy, nullable) NSString *paymentAmountCurrencyCode;

/**
 *  The date this payment was/will be credited to the user, or none if the
 *  payment threshold has not been met.
 */
@property(nonatomic, copy, nullable) NSString *paymentDate;

@end


/**
 *  GTLRAdSense_Payments
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property.
 */
@interface GTLRAdSense_Payments : GTLRCollectionObject

/**
 *  The list of Payments for the account. One or both of a) the account's most
 *  recent payment; and b) the account's upcoming payment.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdSense_Payment *> *items;

/** Kind of list this is, in this case adsense#payments. */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  GTLRAdSense_ReportingMetadataEntry
 */
@interface GTLRAdSense_ReportingMetadataEntry : GTLRObject

/**
 *  For metrics this is a list of dimension IDs which the metric is compatible
 *  with, for dimensions it is a list of compatibility groups the dimension
 *  belongs to.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *compatibleDimensions;

/**
 *  The names of the metrics the dimension or metric this reporting metadata
 *  entry describes is compatible with.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *compatibleMetrics;

/**
 *  Unique identifier of this reporting metadata entry, corresponding to the
 *  name of the appropriate dimension or metric.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Kind of resource this is, in this case adsense#reportingMetadataEntry. */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The names of the dimensions which the dimension or metric this reporting
 *  metadata entry describes requires to also be present in order for the report
 *  to be valid. Omitting these will not cause an error or warning, but may
 *  result in data which cannot be correctly interpreted.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *requiredDimensions;

/**
 *  The names of the metrics which the dimension or metric this reporting
 *  metadata entry describes requires to also be present in order for the report
 *  to be valid. Omitting these will not cause an error or warning, but may
 *  result in data which cannot be correctly interpreted.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *requiredMetrics;

/**
 *  The codes of the projects supported by the dimension or metric this
 *  reporting metadata entry describes.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *supportedProducts;

@end


/**
 *  GTLRAdSense_SavedAdStyle
 */
@interface GTLRAdSense_SavedAdStyle : GTLRObject

/** The AdStyle itself. */
@property(nonatomic, strong, nullable) GTLRAdSense_AdStyle *adStyle;

/**
 *  Unique identifier of this saved ad style. This should be considered an
 *  opaque identifier; it is not safe to rely on it being in any particular
 *  format.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Kind of resource this is, in this case adsense#savedAdStyle. */
@property(nonatomic, copy, nullable) NSString *kind;

/** The user selected name of this SavedAdStyle. */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  GTLRAdSense_SavedAdStyles
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAdSense_SavedAdStyles : GTLRCollectionObject

/** ETag of this response for caching purposes. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The saved ad styles returned in this list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdSense_SavedAdStyle *> *items;

/** Kind of list this is, in this case adsense#savedAdStyles. */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  Continuation token used to page through ad units. To retrieve the next page
 *  of results, set the next request's "pageToken" value to this.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRAdSense_SavedReport
 */
@interface GTLRAdSense_SavedReport : GTLRObject

/**
 *  Unique identifier of this saved report.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Kind of resource this is, in this case adsense#savedReport. */
@property(nonatomic, copy, nullable) NSString *kind;

/** This saved report's name. */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  GTLRAdSense_SavedReports
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAdSense_SavedReports : GTLRCollectionObject

/** ETag of this response for caching purposes. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The saved reports returned in this list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdSense_SavedReport *> *items;

/** Kind of list this is, in this case adsense#savedReports. */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  Continuation token used to page through saved reports. To retrieve the next
 *  page of results, set the next request's "pageToken" value to this.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRAdSense_UrlChannel
 */
@interface GTLRAdSense_UrlChannel : GTLRObject

/**
 *  Unique identifier of this URL channel. This should be considered an opaque
 *  identifier; it is not safe to rely on it being in any particular format.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Kind of resource this is, in this case adsense#urlChannel. */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  URL Pattern of this URL channel. Does not include "http://" or "https://".
 *  Example: www.example.com/home
 */
@property(nonatomic, copy, nullable) NSString *urlPattern;

@end


/**
 *  GTLRAdSense_UrlChannels
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAdSense_UrlChannels : GTLRCollectionObject

/** ETag of this response for caching purposes. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The URL channels returned in this list response.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAdSense_UrlChannel *> *items;

/** Kind of list this is, in this case adsense#urlChannels. */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  Continuation token used to page through URL channels. To retrieve the next
 *  page of results, set the next request's "pageToken" value to this.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
