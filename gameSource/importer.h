

// returns number of mod blocks to load
int initModLoaderStart();

// returns progress... ready for Finish when progress == 1.0
float initModLoaderStep();

void initModLoaderFinish();



int initImportAddStart();

float initImportAddStep();

void initImportAddFinish();



int initImportReplaceStart();

float initImportReplaceStep();

void initImportReplaceFinish();









void freeImporter();
