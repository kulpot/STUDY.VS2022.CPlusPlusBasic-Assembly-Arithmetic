
//ref link:https://www.youtube.com/watch?v=eUXUFOAUAns&list=PLRwVmtr-pp05c1HTBj1no6Fl6C6mlxYDG&index=5
//

// MyAssembly.asm - (customBuildTool)commandline - ml /c /Cx /cof "%(FullPath)"
// MyAssembly.asm - (customBuildTool)output - %(Filename).obj

extern "C" void doit();

void main()
{
	doit();
}

void doit()
{
}
