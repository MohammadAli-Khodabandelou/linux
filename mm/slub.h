#ifndef SLUB_H
#define SLUB_H

void validate_fast_freelist(struct kmem_cache *s, void *object_to_verify);
void validate_slab_freelist(struct kmem_cache *s, void *object_to_verify);
void validate_partial_freelist(struct kmem_cache *s, void *object_to_verify);
void validate_fast_freelist_multi_core(struct kmem_cache *s, void *object_to_verify);

#endif