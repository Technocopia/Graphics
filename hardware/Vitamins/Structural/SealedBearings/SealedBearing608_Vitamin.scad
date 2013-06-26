//NOTE: WHEN MAKING BEARING HOLES FOR 3D PRINTED PARTS, YOU ALWAYS WANT YOUR TOLERANCE TO BE .04 (WHEN ADDED TO DIAMETER) OR .02 (ADDED TO RADIUS). THIS ENSURES A SNUG FIT.

tolerance = .04;
bearingdiam = 21.9;
bearingheight = 7;

module bearing();
{
cylinder(bearingheight, (bearingdiam+tolerance)/2, (bearingdiam+ tolerance)/2, 0);
}
bearing();