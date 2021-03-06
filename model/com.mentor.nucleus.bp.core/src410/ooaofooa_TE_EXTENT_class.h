/*----------------------------------------------------------------------------
 * File:  ooaofooa_TE_EXTENT_class.h
 *
 * Class:       extent  (TE_EXTENT)
 * Component:   ooaofooa
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef OOAOFOOA_TE_EXTENT_CLASS_H
#define OOAOFOOA_TE_EXTENT_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   extent  (TE_EXTENT)
 */
struct ooaofooa_TE_EXTENT {

  /* application analysis class attributes */
  c_t sets_type[ESCHER_SYS_MAX_STRING_LEN];  
  c_t type[ESCHER_SYS_MAX_STRING_LEN];  
  c_t active[ESCHER_SYS_MAX_STRING_LEN];  
  c_t inactive[ESCHER_SYS_MAX_STRING_LEN];  
  c_t initializer[ESCHER_SYS_MAX_STRING_LEN];  
  c_t size_type[ESCHER_SYS_MAX_STRING_LEN];  
  c_t size_name[ESCHER_SYS_MAX_STRING_LEN];  
  c_t istate_type[ESCHER_SYS_MAX_STRING_LEN];  
  c_t istate_name[ESCHER_SYS_MAX_STRING_LEN];  
  c_t container_type[ESCHER_SYS_MAX_STRING_LEN];  
  c_t container_name[ESCHER_SYS_MAX_STRING_LEN];  
  c_t pool_type[ESCHER_SYS_MAX_STRING_LEN];  
  c_t pool_name[ESCHER_SYS_MAX_STRING_LEN];  
  c_t population_type[ESCHER_SYS_MAX_STRING_LEN];  
  c_t population_name[ESCHER_SYS_MAX_STRING_LEN];  
  c_t rstorsize_type[ESCHER_SYS_MAX_STRING_LEN];  
  c_t rstorsize_name[ESCHER_SYS_MAX_STRING_LEN];  
  c_t linkfunc_name[ESCHER_SYS_MAX_STRING_LEN];  

  /* relationship storage */
  ooaofooa_TE_SET * TE_SET_R2066;
  ooaofooa_TE_INSTANCE * TE_INSTANCE_R2066;
};
void ooaofooa_TE_EXTENT_instancedumper( Escher_iHandle_t );
Escher_iHandle_t ooaofooa_TE_EXTENT_instanceloader( Escher_iHandle_t, const c_t * [] );
void ooaofooa_TE_EXTENT_batch_relate( Escher_iHandle_t );

void ooaofooa_TE_EXTENT_R2066_Link( ooaofooa_TE_SET *, ooaofooa_TE_INSTANCE *, ooaofooa_TE_EXTENT * );
void ooaofooa_TE_EXTENT_R2066_Unlink( ooaofooa_TE_SET *, ooaofooa_TE_INSTANCE *, ooaofooa_TE_EXTENT * );


#define ooaofooa_TE_EXTENT_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_ooaofooa_TE_EXTENT_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* OOAOFOOA_TE_EXTENT_CLASS_H */


