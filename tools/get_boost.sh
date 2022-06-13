BOOST_VER=1.79.0
BOOST_VER_UNDERSCORE=1_79_0
BOOST_FOLDER="boost_${BOOST_VER_UNDERSCORE}"
BOOST_TAR_FILE="${BOOST_FOLDER}.tar.gz"
BOOST_URL="https://boostorg.jfrog.io/artifactory/main/release/1.79.0/source/${BOOST_TAR_FILE}"

# start in clean conditions
echo "#################### Removing previous installed libraries..."
rm -rf ./libs/
mkdir -p libs
cd libs;
echo "#################### Downloading boost library version ${BOOST_VER}..."
wget $BOOST_URL;
tar -xf $BOOST_TAR_FILE;
echo "#################### Removing tar file..."
rm $BOOST_TAR_FILE;

BOOST_LIB="`pwd`/$BOOST_FOLDER";

echo "run next command to complete:";
echo "export BOOST_LIB=$BOOST_LIB";

