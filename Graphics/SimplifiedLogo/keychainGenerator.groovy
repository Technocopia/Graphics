import com.neuronrobotics.bowlerstudio.vitamins.*;

File servoFile = ScriptingEngine.fileFromGit(
	"https://github.com/Technocopia/Graphics.git",
	"Graphics/SimplifiedLogo/simplified_logo_keychain_stub.stl");
// Load the .CSG from the disk and cache it in memory


CSG stub  = Vitamins.get(servoFile);

double thickness = stub.getMaxZ()

double rad = (stub .getMaxX()+thickness)/2
double diff =( stub .getMaxY()-stub .getMaxX() )/2
double holeRad =2
CSG simpleSyntax =new Cylinder(rad,rad,thickness,(int)60).toCSG() // a one line Cylinder

CSG nub =new Cylinder(diff,diff,thickness,(int)60).toCSG() // a one line Cylinder
		.movey(rad+diff*2)
simpleSyntax= simpleSyntax
			.union(nub)
			.hull()
CSG hole =new Cylinder(holeRad,holeRad,thickness*3,(int)30).toCSG() // a one line Cylinder	
			.movey(rad+holeRad/2+diff*2)

stub = stub
		.movez(thickness/2)
		.movex(-stub .getMaxX()/2)
		.movey(-stub .getMaxX()/2)
		
CSG kc = simpleSyntax
		.union(	stub	)
		.union(	stub
				.roty(180)
				.toZMin()
				.movez(thickness/2)
		)
		.hull()
		.difference(stub.movez(1.5))
		.difference(hole)
return  kc 
