//// 
//// Autogenerated by xlw 
//// Do not edit this file, it will be overwritten 
//// by InterfaceGenerator 
////

#include "xlw/MyContainers.h"
#include <xlw/CellMatrix.h>
#include "..\cppinterface.h"
#include <xlw/xlw.h>
#include <xlw/XlFunctionRegistration.h>
#include <stdexcept>
#include <xlw/XlOpenClose.h>
#include <xlw/HiResTimer.h>
using namespace xlw;

namespace {
const char* LibraryName = "ThermalLibrary";
};


// registrations start here


namespace
{
XLRegistration::Arg
P_HGArgs[]=
{
{ "p","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerP_HG("xlP_HG",
"P_HG",
"too lazy to comment this function ",
LibraryName,
P_HGArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlP_HG(
double p)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	P_HG(
		p)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
P_HLArgs[]=
{
{ "p","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerP_HL("xlP_HL",
"P_HL",
"too lazy to comment this function ",
LibraryName,
P_HLArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlP_HL(
double p)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	P_HL(
		p)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
P_SGArgs[]=
{
{ "p","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerP_SG("xlP_SG",
"P_SG",
"too lazy to comment this function ",
LibraryName,
P_SGArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlP_SG(
double p)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	P_SG(
		p)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
P_SLArgs[]=
{
{ "p","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerP_SL("xlP_SL",
"P_SL",
"too lazy to comment this function ",
LibraryName,
P_SLArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlP_SL(
double p)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	P_SL(
		p)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
P_TArgs[]=
{
{ "p","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerP_T("xlP_T",
"P_T",
"too lazy to comment this function ",
LibraryName,
P_TArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlP_T(
double p)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	P_T(
		p)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
P_VGArgs[]=
{
{ "p","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerP_VG("xlP_VG",
"P_VG",
"too lazy to comment this function ",
LibraryName,
P_VGArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlP_VG(
double p)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	P_VG(
		p)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
P_VLArgs[]=
{
{ "p","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerP_VL("xlP_VL",
"P_VL",
"too lazy to comment this function ",
LibraryName,
P_VLArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlP_VL(
double p)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	P_VL(
		p)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
P_ETAGArgs[]=
{
{ "p","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerP_ETAG("xlP_ETAG",
"P_ETAG",
"too lazy to comment this function ",
LibraryName,
P_ETAGArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlP_ETAG(
double p)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	P_ETAG(
		p)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
P_ETALArgs[]=
{
{ "p","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerP_ETAL("xlP_ETAL",
"P_ETAL",
"too lazy to comment this function ",
LibraryName,
P_ETALArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlP_ETAL(
double p)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	P_ETAL(
		p)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PH_SArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "h","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPH_S("xlPH_S",
"PH_S",
"too lazy to comment this function ",
LibraryName,
PH_SArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPH_S(
double p,
double h)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PH_S(
		p,
		h)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PH_TArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "h","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPH_T("xlPH_T",
"PH_T",
"too lazy to comment this function ",
LibraryName,
PH_TArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPH_T(
double p,
double h)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PH_T(
		p,
		h)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PH_VArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "h","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPH_V("xlPH_V",
"PH_V",
"too lazy to comment this function ",
LibraryName,
PH_VArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPH_V(
double p,
double h)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PH_V(
		p,
		h)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PS_HArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "s","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPS_H("xlPS_H",
"PS_H",
"too lazy to comment this function ",
LibraryName,
PS_HArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPS_H(
double p,
double s)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PS_H(
		p,
		s)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PS_TArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "s","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPS_T("xlPS_T",
"PS_T",
"too lazy to comment this function ",
LibraryName,
PS_TArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPS_T(
double p,
double s)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PS_T(
		p,
		s)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PS_VArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "s","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPS_V("xlPS_V",
"PS_V",
"too lazy to comment this function ",
LibraryName,
PS_VArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPS_V(
double p,
double s)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PS_V(
		p,
		s)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PT_HArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPT_H("xlPT_H",
"PT_H",
"too lazy to comment this function ",
LibraryName,
PT_HArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPT_H(
double p,
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PT_H(
		p,
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PT_SArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPT_S("xlPT_S",
"PT_S",
"too lazy to comment this function ",
LibraryName,
PT_SArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPT_S(
double p,
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PT_S(
		p,
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PT_VArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPT_V("xlPT_V",
"PT_V",
"too lazy to comment this function ",
LibraryName,
PT_VArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPT_V(
double p,
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PT_V(
		p,
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
PT_ETAArgs[]=
{
{ "p","too lazy to comment this one ","B"},
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerPT_ETA("xlPT_ETA",
"PT_ETA",
"too lazy to comment this function ",
LibraryName,
PT_ETAArgs,
2
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlPT_ETA(
double p,
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);



double result(
	PT_ETA(
		p,
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
T_HGArgs[]=
{
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerT_HG("xlT_HG",
"T_HG",
"too lazy to comment this function ",
LibraryName,
T_HGArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlT_HG(
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	T_HG(
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
T_HLArgs[]=
{
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerT_HL("xlT_HL",
"T_HL",
"too lazy to comment this function ",
LibraryName,
T_HLArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlT_HL(
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	T_HL(
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
T_PArgs[]=
{
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerT_P("xlT_P",
"T_P",
"too lazy to comment this function ",
LibraryName,
T_PArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlT_P(
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	T_P(
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
T_SGArgs[]=
{
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerT_SG("xlT_SG",
"T_SG",
"too lazy to comment this function ",
LibraryName,
T_SGArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlT_SG(
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	T_SG(
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
T_SLArgs[]=
{
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerT_SL("xlT_SL",
"T_SL",
"too lazy to comment this function ",
LibraryName,
T_SLArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlT_SL(
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	T_SL(
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
T_VGArgs[]=
{
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerT_VG("xlT_VG",
"T_VG",
"too lazy to comment this function ",
LibraryName,
T_VGArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlT_VG(
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	T_VG(
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
T_VLArgs[]=
{
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerT_VL("xlT_VL",
"T_VL",
"too lazy to comment this function ",
LibraryName,
T_VLArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlT_VL(
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	T_VL(
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
T_ETAGArgs[]=
{
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerT_ETAG("xlT_ETAG",
"T_ETAG",
"too lazy to comment this function ",
LibraryName,
T_ETAGArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlT_ETAG(
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	T_ETAG(
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
T_ETALArgs[]=
{
{ "t","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerT_ETAL("xlT_ETAL",
"T_ETAL",
"too lazy to comment this function ",
LibraryName,
T_ETALArgs,
1
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlT_ETAL(
double t)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);


double result(
	T_ETAL(
		t)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
SolveExtractionEnthalpyArgs[]=
{
{ "p1","too lazy to comment this one ","B"},
{ "t1","too lazy to comment this one ","B"},
{ "p2","too lazy to comment this one ","B"},
{ "eta","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerSolveExtractionEnthalpy("xlSolveExtractionEnthalpy",
"SolveExtractionEnthalpy",
"too lazy to comment this function ",
LibraryName,
SolveExtractionEnthalpyArgs,
4
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlSolveExtractionEnthalpy(
double p1,
double t1,
double p2,
double eta)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);





double result(
	SolveExtractionEnthalpy(
		p1,
		t1,
		p2,
		eta)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

namespace
{
XLRegistration::Arg
SolveExtractionTemperatureArgs[]=
{
{ "p1","too lazy to comment this one ","B"},
{ "t1","too lazy to comment this one ","B"},
{ "p2","too lazy to comment this one ","B"},
{ "eta","too lazy to comment this one ","B"}
};
  XLRegistration::XLFunctionRegistrationHelper
registerSolveExtractionTemperature("xlSolveExtractionTemperature",
"SolveExtractionTemperature",
"too lazy to comment this function ",
LibraryName,
SolveExtractionTemperatureArgs,
4
,false
,false
,""
,""
,false
,false
,false
);
}



extern "C"
{
LPXLFOPER EXCEL_EXPORT
xlSolveExtractionTemperature(
double p1,
double t1,
double p2,
double eta)
{
EXCEL_BEGIN;

	if (XlfExcel::Instance().IsCalledByFuncWiz())
		return XlfOper(true);





double result(
	SolveExtractionTemperature(
		p1,
		t1,
		p2,
		eta)
	);
return XlfOper(result);
EXCEL_END
}
}



//////////////////////////

//////////////////////////
// Methods that will get registered to execute in AutoOpen
//////////////////////////

//////////////////////////
// Methods that will get registered to execute in AutoClose
//////////////////////////

