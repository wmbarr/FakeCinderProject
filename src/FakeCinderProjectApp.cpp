#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class FakeCinderProjectApp : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void FakeCinderProjectApp::setup()
{
}

void FakeCinderProjectApp::mouseDown( MouseEvent event )
{
     cout << "Hello World!";
}

void FakeCinderProjectApp::update()
{
}

void FakeCinderProjectApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_NATIVE( FakeCinderProjectApp, RendererGl )
