#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"
//#include "cinder/ImageIo.h"
//#include "cinder/gl/Texture.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class FakeCinderProjectApp : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
    void prepareSettings ( Settings *settings );
  //  gl::Texture myImage;
    
};

void FakeCinderProjectApp::prepareSettings( Settings *settings )
{
//    settings->setWindowSize( 800, 600 );
 //   settings->setFrameRate( 60.0f );
}

void FakeCinderProjectApp::setup()
{
 //   myImage = gl::Texture(loadImage(loadResource("chester01.jpg")));
    
    

}



void FakeCinderProjectApp::mouseDown( MouseEvent event )
{
  
}

void FakeCinderProjectApp::update()
{
}

void FakeCinderProjectApp::draw()
{   // float gray = sin( getElapsedSeconds() ) * 0.5f + 0.5f;
    // gl::clear( Color( gray,gray, gray), true );
    // clear out the window with black
	gl::clear( Color( 0, 0, 0 ) );

//gl::draw( myImage, getWindowBounds() );

//    gl::drawSolidCircle( Vec2f( 15.0f, 25.0f ), 50.0f );
 
    float x = cos(getElapsedSeconds())*100.0f;
    float y = sin(getElapsedSeconds())*100.0f;
    gl::drawSolidCircle( Vec2f( x+getWindowWidth()/2, y+getWindowHeight()/2 ), 50.0f);
}



CINDER_APP_NATIVE( FakeCinderProjectApp, RendererGl )
