//#pragma once
//
//#ifndef __INCLUDE_LOCK_H__
//#define __INCLUDE_LOCK_H__
//#include <Windows.h>
//
//class CLock
//{
//public:
//	CLock()
//	{
//		::InitializeCriticalSection(&m_oSection);
//	}
//
//	void Lock()
//	{
//		::EnterCriticalSection(&m_oSection);
//	}
//
//	void UnLock()
//	{
//		::LeaveCriticalSection(&m_oSection);
//	}
//
//	~CLock()
//	{
//		::DeleteCriticalSection(&m_oSection);
//	}
//
//private:
//	CRITICAL_SECTION m_oSection;
//};
//
////×Ô¶¯Ëø
//class CAutoLock
//{
//public:
//	CAutoLock(CLock& lock) : m_lock(lock)
//	{
//		m_lock.Lock();
//	}
//	~CAutoLock()
//	{
//		m_lock.UnLock();
//	}
//
//private:
//	CLock& m_lock;
//};
//#endif //__INCLUDE_LOCK_H__
//
//
#pragma once 
#ifndef __INCLUDE_LOCK_H__
#define __INCLUDE_LOCK_H__

#include<windows.h>

class CLock
{
public:
	CLock()
	{
		::InitializeCriticalSection(&m_oCriticalSection);
	}
	void Lock()
	{
		::EnterCriticalSection(&m_oCriticalSection);
	}
	void UnLock()
	{
		::LeaveCriticalSection(&m_oCriticalSection);
	}
	~CLock()
	{
		::DeleteCriticalSection(&m_oCriticalSection);
	}
private:
	CRITICAL_SECTION m_oCriticalSection;
};

class CAutoLock
{
public:
	CAutoLock(CLock& Lock):m_Lock(Lock)
	{
		m_Lock.Lock();
	}
	~CAutoLock()
	{
		m_Lock.UnLock();
	}
private:
	CLock& m_Lock;
};
#endif //__INCLUDE_LOCK_H__
