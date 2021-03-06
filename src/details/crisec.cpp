/**
 * @file   crisec.cpp
 * @author Vic P.
 * @brief  Implementation for Critical Section
 */

#include "Vutils.h"

namespace vu
{

CCriticalSection::CCriticalSection()
{
  memset(&m_CriticalSection, 0, sizeof(m_CriticalSection));
}

CCriticalSection::~CCriticalSection()
{
}

void vuapi CCriticalSection::Init()
{
  InitializeCriticalSection(&m_CriticalSection);
}

void vuapi CCriticalSection::Enter()
{
  EnterCriticalSection(&m_CriticalSection);
}

void vuapi CCriticalSection::Leave()
{
  LeaveCriticalSection(&m_CriticalSection);
}

void vuapi CCriticalSection::Destroy()
{
  DeleteCriticalSection(&m_CriticalSection);
}

TCriticalSection& vuapi CCriticalSection::GetCurrentSection()
{
  return m_CriticalSection;
}

} // namespace vu