// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� WINRARGENERATE_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// WINRARGENERATE_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifndef DLL_EXPORT
#define _LIBAPI __declspec(dllexport)
#else
#define _LIBAPI __declspec(dllimport)
#endif
#ifdef __cplusplus
extern "C" {
#endif
	_LIBAPI char* KeyGenerate(const char* UserName, const char* LicenseType);
#ifdef __cplusplus
}
#endif

// �����Ǵ� WinRAR-Generate.dll ������
