#ifndef MUTGENE_H
#define MUTGENE_H

typedef struct MutGene MutGene;

MutGene* mutgene_new(void);

void mutgene_reset(MutGene*);

void mutgene_delete(MutGene*);

#endif