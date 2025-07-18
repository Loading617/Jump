#include "Jump.h"

Jump::Jump()
{
	CtrlLayout(*this, "Jump!");
	Sizeable().MinimizeBox().MaximizeBox();
}

GUI_APP_MAIN
{
	Jump().Run();
}
