/*
	CI.H
	----
*/

#ifndef CI_H_
#define CI_H_

#include <stdint.h>

/*
	class CI_VOCAB
	--------------
*/
class CI_vocab
{
public:
	const char *term;
	void (*method)(uint16_t *accumulators);
	uint64_t cf;
	uint64_t df;
public:
	static int compare(const void *a, const void *b) { return strcmp(((CIvocab*)a)->term, ((CIvocab*)b)->term);}
	static int compare_string(const void *a, const void *b) { return strcmp(()char *)a, ((CIvocab*)b)->term);}
};

extern uint64_t CI_unique_terms;
extern uint64_t CI_unique_documents;

#endif
