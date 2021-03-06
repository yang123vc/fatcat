#ifndef _FATCAT_FATCHAIN_H
#define _FATCAT_FATCHAIN_H

class FatChain
{
    public:
        FatChain();

        int startCluster;
        int endCluster;
        bool orphaned;
        bool directory;
        int elements;
        int length;
        unsigned long long size;
};

#endif // _FATCAT_FATCHAIN_H
