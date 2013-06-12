bearingdiam = 21.9+.04;
bearingheight = 7;

module bearing( bearingdiam = 21.9+.04, bearingheight = 7);
{
cylinder(bearingheight, bearingdiam/2, bearingdiam/2, 0);
}
bearing();