/**
 * @author Nicolas Bredeche <nicolas.bredeche@upmc.fr>
 * NNlib: Leo Cazenille <leo.cazenille@upmc.fr>
 */



#ifndef BOIDSSHAREDDATA_H
#define BOIDSSHAREDDATA_H

class BoidsSharedData {
    
public:
    
    // -----
    static int gEvaluationTime; //! theoretical duration of a generation -- used for logging purpose
    
    static double gMonitorPositions; //! used in WorldObserver. Compute and log all necessary information for monitoring position and orientation wrt. center.
    
    static bool gPropertiesLoaded;
    
    static bool gSnapshots; // take snapshots
    static int gSnapshotsFrequency; // every N generations
    
    // -----
    
    
    
};


#endif
