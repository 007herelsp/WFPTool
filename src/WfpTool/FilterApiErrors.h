#pragma once
#ifndef FILTER_API_ERRORS_H
#define FILTER_API_ERRORS_H

#define FILTER_API_NO_ERROR 0

#define FILTER_API_ERROR_HIWORD 0x2888	// Every filter api specific error code's hi word will be this
#define MAKE_FILTER_API_ERROR(x) ((FILTER_API_ERROR_HIWORD << 16) + (x))

#define FILTER_API_ERROR_FILTER_ALREADY_ENABLED				MAKE_FILTER_API_ERROR(1)
#define FILTER_API_ERROR_FILTER_NOT_FOUND					MAKE_FILTER_API_ERROR(2)
#define FILTER_API_ERROR_INVALID_FILTER_HANDLE				MAKE_FILTER_API_ERROR(3)
#define FILTER_API_ERROR_INVALID_ADAPTER_NAME_OR_ID			MAKE_FILTER_API_ERROR(4)
#define FILTER_API_ERROR_NO_DNS_SERVERS_FOUND				MAKE_FILTER_API_ERROR(5)
#define FILTER_API_ERROR_NO_IP_FOUND_FOR_GIVEN_HOSTNAE		MAKE_FILTER_API_ERROR(6)
#define FILTER_API_ERROR_INVALID_ALLOW_SPECIFIC_FILTER		MAKE_FILTER_API_ERROR(7)

#define FILTER_API_ERROR_INTERNAL							MAKE_FILTER_API_ERROR(1024)


#define WFP_ERROR_HIWORD 0x8032			// For WFP api, the error code will be returned as is and its hiword is 0x8032
#endif