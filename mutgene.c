#include "genometools.h"
#include "core/str_array_api.h"
#include "extended/feature_node_iterator_api.h"
#include "extended/node_visitor_api.h"
#include "extended/genome_node_api.h"
#include "core/undef_api.h"
#include "core/unused_api.h"
#include "core/assert_api.h"
#include "core/cstr_api.h"
#include "core/phase_api.h"
#include "core/array_api.h"
#include "mutgene.h"


struct MutGene {  
  GtStr *type;
  GtRange *rng;
  unsigned long phase;
  GtArray *gene_features;
};


MutGene* mutgene_new(void) {
  MutGene *gene = gt_malloc(sizeof (MutGene));  
  return gene;
}

void mutgene_reset(MutGene *gene) {
  gt_assert(gene);  
}

void mutgene_delete(MutGene *gene) {
  gt_free(gene);  
}