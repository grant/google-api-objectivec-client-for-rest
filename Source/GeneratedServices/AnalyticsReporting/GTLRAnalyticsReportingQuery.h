// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Analytics Reporting API (analyticsreporting/v4)
// Description:
//   Accesses Analytics report data.
// Documentation:
//   https://developers.google.com/analytics/devguides/reporting/core/v4/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRAnalyticsReporting_GetReportsRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other AnalyticsReporting query classes.
 */
@interface GTLRAnalyticsReportingQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Returns the Analytics data.
 *
 *  Method: analyticsreporting.reports.batchGet
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAnalyticsReportingAnalytics
 *    @c kGTLRAuthScopeAnalyticsReportingAnalyticsReadonly
 */
@interface GTLRAnalyticsReportingQuery_ReportsBatchGet : GTLRAnalyticsReportingQuery
// Previous library name was
//   +[GTLQueryAnalyticsReporting queryForReportsBatchGetWithObject:]

/**
 *  Fetches a @c GTLRAnalyticsReporting_GetReportsResponse.
 *
 *  Returns the Analytics data.
 *
 *  @param object The @c GTLRAnalyticsReporting_GetReportsRequest to include in
 *    the query.
 *
 *  @return GTLRAnalyticsReportingQuery_ReportsBatchGet
 */
+ (instancetype)queryWithObject:(GTLRAnalyticsReporting_GetReportsRequest *)object;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
