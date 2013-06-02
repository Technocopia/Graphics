const char RotTransDragger::NavigationDraggerLayout[] =
"\n"
"\n"
"# Geometry resource file for the RotTransDragger\n"
"\n"
"# Geometry for the rotating parts.\n"
"DEF rotTransRotatorRotator Separator {\n"
"    Material { \n"
"       diffuseColor  .05 .18 .125\n"
"       emissiveColor .05 .18 .125\n"
"    }\n"
"    DrawStyle { lineWidth 2 }\n"
"    Cylinder {\n"
"	       radius 1.85\n"
"       	height .15\n"
"	       parts SIDES\n"
"    }\n"
"}\n"
"\n"
"DEF rotTransRotatorRotatorActive Separator {\n"
"    Material { \n"
"       	diffuseColor  .05 .2025 .18\n"
"	       emissiveColor .05 .2025 .18\n"
"    }\n"
"    DrawStyle { lineWidth 2 }\n"
"    Cylinder {\n"
"	       radius 1.85\n"
"	       height .15\n"
"	       parts SIDES\n"
"    }\n"
"}\n"
"\n"
"# Do not display the axis feedback used\n"
"# by the cylinder manips.\n"
"DEF rotTransRotatorFeedback Separator { }\n"
"DEF rotTransRotatorFeedbackActive Separator { }\n"
"\n"
"DEF rotTransTranslatorTranslator Separator {\n"
"    Material { diffuseColor .6 .6 .6 }\n"
"    DrawStyle { style LINES }\n"
"    Sphere { radius 1.732 }\n"
"}\n"
"\n"
"DEF rotTransTranslatorTranslatorActive Separator {\n"
"    Material { diffuseColor .6 .6 0 }\n"
"    DrawStyle { style LINES }\n"
"    Sphere { radius 1.732 }\n"
"}\n"
"\n"
"# Don't show anything for feedback during inactive state.\n"
"DEF rotTransTranslatorFeedback Separator { }\n"
"\n"
"DEF rotTransTranslatorFeedbackActive Separator {\n"
"    Material { diffuseColor .5  .9 .9 }\n"
"    # An arrow aligned with the x-axis.\n"
"    RotationXYZ {\n"
"	       axis Z\n"
"	       angle 1.57079\n"
"    }\n"
"    Separator {\n"
"\n"
"       	#stick\n"
"       	Cylinder { height 4.0 radius 0.05 }\n"
"\n"
"       	#left arrowhead\n"
"	       Translation { translation 0 2.2 0 }\n"
"	       Cone { height 0.4 bottomRadius 0.2 }\n"
"\n"
"       	#right arrowhead\n"
"       	Translation { translation 0 -4.4 0 }\n"
"       	RotationXYZ { axis Z angle 3.14159 }\n"
"	       Cone { height 0.4 bottomRadius 0.2 }\n"
"   }\n"
"}\n";