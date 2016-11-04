/**
 * @author Nicolas Bredeche <nicolas.bredeche@upmc.fr>
 */


#include "TemplateRandomwalk/include/TemplateRandomwalkWorldObserver.h"

#include "World/World.h"

#include "TemplateRandomwalk/include/TemplateRandomwalkController.h"

TemplateRandomwalkWorldObserver::TemplateRandomwalkWorldObserver( World *__world ) : WorldObserver( __world )
{
	_world = __world;
}

TemplateRandomwalkWorldObserver::~TemplateRandomwalkWorldObserver()
{
	// nothing to do.
}

void TemplateRandomwalkWorldObserver::reset()
{
	// nothing to do.
}

void TemplateRandomwalkWorldObserver::step()
{
    
    // The following code shows an example where every 100 iterations, robots are re-located to their initial positions, and parameters are randomly changed.
    
    if ( gWorld->getIterations() % 100 == 0 )
    {
        std::cout << "Randomizing parameters\n";
        for ( int i = 0 ; i != gWorld->getNbOfRobots() ; i++ )
        {
            Robot *robot = (gWorld->getRobot(i));
            
            (*robot).setCoordReal( 100 + (i*50)%800 , 100 + ( i*50/800 * 50 )  );
            
            TemplateRandomwalkController *controller = ((TemplateRandomwalkController*)(gWorld->getRobot(i)->getController()));
            
            for ( int j = 0 ; j != (*controller)._params.size() ; j++ )
            {
                (*controller)._params[j] = ranf()*2.0-1.0;
            }
        }
    }
    
}
