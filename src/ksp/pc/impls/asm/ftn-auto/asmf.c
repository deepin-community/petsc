#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/fortranimpl.h"
/* asm.c */
/* Fortran interface file */

/*
* This file was generated automatically by bfort from the C source
* file.  
 */

#ifdef PETSC_USE_POINTER_CONVERSION
#if defined(__cplusplus)
extern "C" { 
#endif 
extern void *PetscToPointer(void*);
extern int PetscFromPointer(void *);
extern void PetscRmPointer(void*);
#if defined(__cplusplus)
} 
#endif 

#else

#define PetscToPointer(a) (*(PetscFortranAddr *)(a))
#define PetscFromPointer(a) (PetscFortranAddr)(a)
#define PetscRmPointer(a)
#endif

#include "petscpc.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcasmsetoverlap_ PCASMSETOVERLAP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcasmsetoverlap_ pcasmsetoverlap
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcasmsettype_ PCASMSETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcasmsettype_ pcasmsettype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcasmgettype_ PCASMGETTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcasmgettype_ pcasmgettype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcasmsetlocaltype_ PCASMSETLOCALTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcasmsetlocaltype_ pcasmsetlocaltype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcasmgetlocaltype_ PCASMGETLOCALTYPE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcasmgetlocaltype_ pcasmgetlocaltype
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcasmsetsortindices_ PCASMSETSORTINDICES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcasmsetsortindices_ pcasmsetsortindices
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcasmsetdmsubdomains_ PCASMSETDMSUBDOMAINS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcasmsetdmsubdomains_ pcasmsetdmsubdomains
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define pcasmgetdmsubdomains_ PCASMGETDMSUBDOMAINS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define pcasmgetdmsubdomains_ pcasmgetdmsubdomains
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void  pcasmsetoverlap_(PC pc,PetscInt *ovl, int *__ierr)
{
*__ierr = PCASMSetOverlap(
	(PC)PetscToPointer((pc) ),*ovl);
}
PETSC_EXTERN void  pcasmsettype_(PC pc,PCASMType *type, int *__ierr)
{
*__ierr = PCASMSetType(
	(PC)PetscToPointer((pc) ),*type);
}
PETSC_EXTERN void  pcasmgettype_(PC pc,PCASMType *type, int *__ierr)
{
*__ierr = PCASMGetType(
	(PC)PetscToPointer((pc) ),type);
}
PETSC_EXTERN void  pcasmsetlocaltype_(PC pc,PCCompositeType *type, int *__ierr)
{
*__ierr = PCASMSetLocalType(
	(PC)PetscToPointer((pc) ),*type);
}
PETSC_EXTERN void  pcasmgetlocaltype_(PC pc,PCCompositeType *type, int *__ierr)
{
*__ierr = PCASMGetLocalType(
	(PC)PetscToPointer((pc) ),type);
}
PETSC_EXTERN void  pcasmsetsortindices_(PC pc,PetscBool *doSort, int *__ierr)
{
*__ierr = PCASMSetSortIndices(
	(PC)PetscToPointer((pc) ),*doSort);
}
PETSC_EXTERN void  pcasmsetdmsubdomains_(PC pc,PetscBool *flg, int *__ierr)
{
*__ierr = PCASMSetDMSubdomains(
	(PC)PetscToPointer((pc) ),*flg);
}
PETSC_EXTERN void  pcasmgetdmsubdomains_(PC pc,PetscBool *flg, int *__ierr)
{
*__ierr = PCASMGetDMSubdomains(
	(PC)PetscToPointer((pc) ),flg);
}
#if defined(__cplusplus)
}
#endif
