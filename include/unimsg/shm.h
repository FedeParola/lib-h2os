/*
 * Some sort of Copyright
 */

#ifndef __LIBUNIMSG_SHM__
#define __LIBUNIMSG_SHM__

#include <unimsg/api.h>
#include <uk/arch/types.h>

struct unimsg_shm_desc {
	void *addr;
	unsigned size;
};

UNIMSG_API_DEFINE(unimsg_buffer_get, struct unimsg_shm_desc *, desc);

UNIMSG_API_DEFINE(unimsg_buffer_put, struct unimsg_shm_desc *, desc);

#endif /* __LIBUNIMSG_SHM__ */