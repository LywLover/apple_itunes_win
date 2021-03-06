#ifndef WIN_ITUNES_ITUNES_HTTPS_H_
#define WIN_ITUNES_ITUNES_HTTPS_H_
//////////////////////////////////////////////////////////////////////////
#include "appstore_core/basictypes.h"
//#include "passport/itunes_client_interface.h"
//////////////////////////////////////////////////////////////////////////
namespace win_itunes{
	namespace internal{
		enum iTunesExtHeader{
			apple_itunes = -1,
			apple_authenticate,
			apple_signSapSetup
		};
		std::string ReadHTTPS(const wchar_t* domain,const wchar_t* path,const wchar_t* header,iTunesExtHeader options = apple_itunes,const wchar_t* referer=NULL,const char* port=NULL);
		std::string SendHTTPS(const wchar_t* domain,const wchar_t* path,const void* src,const size_t length,iTunesExtHeader options,const wchar_t* header,const wchar_t* referer=NULL,const char* post = NULL);
	}
}
//////////////////////////////////////////////////////////////////////////
#endif