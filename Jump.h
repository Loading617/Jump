#ifndef _Jump_Jump_h
#define _Jump_Jump_h

#include <CtrlLib/CtrlLib.h>

using namespace Upp;

#define LAYOUTFILE <Jump/Jump.lay>
#include <CtrlCore/lay.h>

class Jump : public WithJumpLayout<TopWindow> {
public:
	Jump();
};

#endif
