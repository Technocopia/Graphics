module test()
{
	difference()
	{
		translate([-2,-10,35])
		{
			cube([25, 60, 15]);
		}

//this is how you import STL files. The "../" indicates going up one folder from the folder in which your file (in this case, "motor cutout test" is stored. After you are up to a folder that can branch back down the location of your desired STL, just start using folder names.

		import("../Motors With Built-In Tolerances/tolerance motor-- screws up.stl");

	}
}




//here I just flipped the result over so it has a flat surface to print on
rotate([180, 0, 0])
{
	test();
}