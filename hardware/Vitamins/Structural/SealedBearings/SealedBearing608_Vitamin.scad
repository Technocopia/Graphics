tolerance = .04;
bearingdiam = 21.9;
bearingheight = 7;

module bearing();
{
cylinder(bearingheight, (bearingdiam+tolerance)/2, (bearingdiam+ tolerance)/2, 0);
}
bearing();