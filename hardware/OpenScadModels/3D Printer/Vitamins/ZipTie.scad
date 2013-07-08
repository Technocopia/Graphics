function ZipTieWidth()=2.5;
function ZipTieHeight()=1;
function ZipTieLength()=100;

module ZipTie()
{
	cube([ZipTieHeight(),ZipTieLength(), ZipTieWidth()]);
}

ZipTie();