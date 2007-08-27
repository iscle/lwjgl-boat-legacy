#include <d3d9.h>
#include "org_lwjgl_d3d_IDirect3DDevice9.h"

void setPointer(JNIEnv *env, jobject classInstance, const char* methodName, jlong pointer) {
    jclass clazz = (*env)->GetObjectClass(env, classInstance);
    jmethodID mid = (*env)->GetMethodID(env, clazz, methodName, "(J)V");
    if (mid != NULL) {
        (*env)->CallVoidMethod(env, classInstance, mid, pointer);
    }
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nBeginScene
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nBeginScene
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nBeginStateBlock
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nBeginStateBlock
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nClear
 * Signature: (JLjava/nio/LongBuffer;JIFJ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nClear
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong count, jobject rects, jlong flags, jint color, jfloat z, jlong stencil) {

    return IDirect3DDevice9_Clear((IDirect3DDevice9*)iDirect3DDevice9, count, NULL, flags, color, z, stencil);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nColorFill
 * Signature: (Lorg/lwjgl/d3d/IDirect3DSurface9;Lorg/lwjgl/d3d/Rectangle;I)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nColorFill
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong surface, jobject rectBuffer, jint color) {


    return IDirect3DDevice9_ColorFill((IDirect3DDevice9*)iDirect3DDevice9, (IDirect3DSurface9*)surface, rect, color);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nCreateAdditionalSwapChain
 * Signature: (Lorg/lwjgl/d3d/D3DPresentParameters;Lorg/lwjgl/d3d/IDirect3DSwapChain9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nCreateAdditionalSwapChain
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject presentationParametersBuffer, jobject swapChain) {

    IDirect3DSwapChain9 *iDirect3DSwapChain9;

    HRESULT hResult = IDirect3DDevice9_CreateAdditionalSwapChain((IDirect3DDevice9*)iDirect3DDevice9, presentationParameters, &iDirect3DSwapChain9);

    setPointer(env, swapChain, "setIDirect3DSwapChain9", (jlong)iDirect3DSwapChain9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nCreateCubeTexture
 * Signature: (IIJIILorg/lwjgl/d3d/IDirect3DCubeTexture9;J)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nCreateCubeTexture
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint edgeLength, jint levels, jlong usage, jint format, jint pool, jobject cubeTexture, jlong shareHandle) {


    HRESULT hResult = IDirect3DDevice9_CreateCubeTexture((IDirect3DDevice9*)iDirect3DDevice9, edgeLength, levels,
                        usage, format, pool, &iDirect3DCubeTexture9, (HANDLE*)shareHandle);

    setPointer(env, cubeTexture, "setIDirect3DCubeTexture9", (jlong)iDirect3DCubeTexture9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nCreateDepthStencilSurface
 * Signature: (IIIIJZLorg/lwjgl/d3d/IDirect3DSurface9;J)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nCreateDepthStencilSurface
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint width, jint height, jint format, jint multiSample, jlong multiSampleQuality, jboolean discard, jobject surface, jlong sharedHandle) {


    HRESULT hResult = IDirect3DDevice9_CreateDepthStencilSurface((IDirect3DDevice9*)iDirect3DDevice9, width, height, format,
                        multiSample, multiSampleQuality, discard, &iDirect3DSurface9, (HANDLE*)sharedHandle);

    setPointer(env, surface, "setIDirect3DSurface9", (jlong)iDirect3DSurface9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nCreateIndexBuffer
 * Signature: (IJIILorg/lwjgl/d3d/IDirect3DIndexBuffer9;J)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nCreateIndexBuffer
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint length, jlong usage, jint format, jint pool, jobject indexBuffer, jlong shareHandle) {


    HRESULT hResult = IDirect3DDevice9_CreateIndexBuffer((IDirect3DDevice9*)iDirect3DDevice9, length, usage, format,
                        pool, &iDirect3DIndexBuffer9, (HANDLE*)shareHandle);

    setPointer(env, indexBuffer, "setIDirect3DIndexBuffer9", (jlong)iDirect3DIndexBuffer9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nCreateOffscreenPlainSurface
 * Signature: (IIIJLorg/lwjgl/d3d/IDirect3DSurface9;J)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nCreateOffscreenPlainSurface
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint width, jint height, jint format, jlong pool, jobject surface, jlong sharedHandle) {


    HRESULT hResult = IDirect3DDevice9_CreateOffscreenPlainSurface((IDirect3DDevice9*)iDirect3DDevice9, width, height, format,
                        pool, &iDirect3DSurface9, (HANDLE*)sharedHandle);

    setPointer(env, surface, "setIDirect3DSurface9", (jlong)iDirect3DSurface9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nCreatePixelShader
 * Signature: (JLorg/lwjgl/d3d/IDirect3DPixelShader9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nCreatePixelShader
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong function, jobject shader) {


    HRESULT hResult = IDirect3DDevice9_CreatePixelShader((IDirect3DDevice9*)iDirect3DDevice9, (const DWORD*)function, &iDirect3DPixelShader9);

    setPointer(env, shader, "setIDirect3DPixelShader9", (jlong)iDirect3DPixelShader9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nCreateQuery
 * Signature: (ILorg/lwjgl/d3d/IDirect3DQuery9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nCreateQuery
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint type, jobject query) {


    HRESULT hResult = IDirect3DDevice9_CreateQuery((IDirect3DDevice9*)iDirect3DDevice9, type, &iDirect3DQuery9);

    setPointer(env, query, "setIDirect3DQuery9", (jlong)iDirect3DQuery9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nCreateRenderTarget
 * Signature: (IIIIJZLorg/lwjgl/d3d/IDirect3DSurface9;J)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nCreateRenderTarget
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint width, jint height, jint format, jint multiSample, jlong multiSampleQuality, jboolean lockable, jobject surface, jlong sharedHandle) {


    HRESULT hResult = IDirect3DDevice9_CreateRenderTarget((IDirect3DDevice9*)iDirect3DDevice9, width, height, format,
                        multiSample, multiSampleQuality, lockable, &iDirect3DSurface9, (HANDLE*)sharedHandle);

    setPointer(env, surface, "setIDirect3DSurface9", (jlong)iDirect3DSurface9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nCreateStateBlock
 * Signature: (ILorg/lwjgl/d3d/IDirect3DStateBlock9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nCreateStateBlock
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint type, jobject stateBlock) {


    HRESULT hResult = IDirect3DDevice9_CreateStateBlock((IDirect3DDevice9*)iDirect3DDevice9, type, &iDirect3DStateBlock9);

    setPointer(env, stateBlock, "setIDirect3DStateBlock9", (jlong)iDirect3DStateBlock9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nCreateTexture
 * Signature: (IIIJIILorg/lwjgl/d3d/IDirect3DTexture9;J)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nCreateTexture
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint width, jint height, jint levels, jlong usage, jint format, jint pool, jobject texture, jlong sharedHandle) {


    HRESULT hResult = IDirect3DDevice9_CreateTexture((IDirect3DDevice9*)iDirect3DDevice9, width, height, levels,
                        usage, format, pool, &iDirect3DTexture9, (HANDLE*)sharedHandle);

    setPointer(env, texture, "setIDirect3DTexture9", (jlong)iDirect3DTexture9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nCreateVertexBuffer
 * Signature: (IJJILorg/lwjgl/d3d/IDirect3DVertexBuffer9;J)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nCreateVertexBuffer
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint length, jint usage, jint FVF, jint pool, jobject vertexBuffer, jlong sharedHandle) {


    HRESULT hResult = IDirect3DDevice9_CreateVertexBuffer((IDirect3DDevice9*)iDirect3DDevice9, length, usage, FVF,
                        pool, &iDirect3DVertexBuffer9, (HANDLE*)sharedHandle);

    setPointer(env, vertexBuffer, "setIDirect3DVertexBuffer9", (jlong)iDirect3DVertexBuffer9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nCreateVertexDeclaration
 * Signature: (Lorg/lwjgl/d3d/D3DVertexElement9;Lorg/lwjgl/d3d/IDirect3DVertexDeclaration9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nCreateVertexDeclaration
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject vertexElementsBuffer, jobject decl) {

    D3DVERTEXELEMENT9* vertexElements = (D3DVERTEXELEMENT9*)((*env)->GetDirectBufferAddress(env, vertexElementsBuffer));

    HRESULT hResult = IDirect3DDevice9_CreateVertexDeclaration((IDirect3DDevice9*)iDirect3DDevice9, vertexElements,
                        &iDirect3DVertexDeclaration9);

    setPointer(env, decl, "setIDirect3DVertexDeclaration9", (jlong)iDirect3DVertexDeclaration9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nCreateVertexShader
 * Signature: (JLorg/lwjgl/d3d/IDirect3DVertexShader9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nCreateVertexShader
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong function, jobject shader) {


    HRESULT hResult = IDirect3DDevice9_CreateVertexShader((IDirect3DDevice9*)iDirect3DDevice9, (DWORD*)function,
                        &iDirect3DVertexShader9);

    setPointer(env, shader, "setIDirect3DVertexShader9", (jlong)iDirect3DVertexShader9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nCreateVolumeTexture
 * Signature: (IIIIJIILorg/lwjgl/d3d/IDirect3DVolumeTexture9;J)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nCreateVolumeTexture
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint width, jint height, jint depth, jint levels, jlong usage, jint format, jint pool, jobject volumeTexture, jlong sharedHandle) {


    HRESULT hResult = IDirect3DDevice9_CreateVolumeTexture((IDirect3DDevice9*)iDirect3DDevice9, width, height, depth,
                        levels, usage, format, pool, &iDirect3DVolumeTexture9, (HANDLE*)sharedHandle);

    setPointer(env, volumeTexture, "setIDirect3DVolumeTexture9", (jlong)iDirect3DVolumeTexture9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nDeletePatch
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nDeletePatch
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint handle) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nDrawIndexedPrimitive
 * Signature: (IIIIII)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nDrawIndexedPrimitive
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint type, jint baseVertexIndex, jint minIndex, jint numVertices, jint startIndex, jint primitiveCount) {

                                                numVertices, startIndex, primitiveCount);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nDrawIndexedPrimitiveUP
 * Signature: (IIIILjava/nio/ByteBuffer;ILjava/nio/ByteBuffer;I)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nDrawIndexedPrimitiveUP
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint primitiveType, jint minVertexIndex, jint numVertices, jint primitiveCount, jobject indexDataBuffer, jint indexDataFormat, jobject vertexStreamZeroDataBuffer, jint vertexStreamZeroStride) {

    CONST void *vertexStreamZeroData = (CONST void *)((*env)->GetDirectBufferAddress(env, vertexStreamZeroDataBuffer));

    return IDirect3DDevice9_DrawIndexedPrimitiveUP((IDirect3DDevice9*)iDirect3DDevice9, primitiveType, minVertexIndex,
                numVertices, primitiveCount, indexData, indexDataFormat, vertexStreamZeroData, vertexStreamZeroStride);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nDrawPrimitive
 * Signature: (III)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nDrawPrimitive
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint primitiveType, jint startVertex, jint primitiveCount) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nDrawPrimitiveUP
 * Signature: (IILjava/nio/ByteBuffer;I)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nDrawPrimitiveUP
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint primitiveType, jint primitiveCount, jobject vertexStreamZeroData, jint vertexStreamZeroStride) {


    return IDirect3DDevice9_DrawPrimitiveUP((IDirect3DDevice9*)iDirect3DDevice9, primitiveType, primitiveCount, vertex, vertexStreamZeroStride);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nDrawRectPatch
 * Signature: (ILjava/nio/FloatBuffer;Lorg/lwjgl/d3d/D3DRectPatchInfo;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nDrawRectPatch
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint handle, jobject numSegsBuffer, jobject rectPatchInfoBuffer) {

    const D3DRECTPATCH_INFO *rectPatchInfo = (const D3DRECTPATCH_INFO *)((*env)->GetDirectBufferAddress(env, rectPatchInfoBuffer));

    return IDirect3DDevice9_DrawRectPatch((IDirect3DDevice9*)iDirect3DDevice9, handle, numSegs, rectPatchInfo);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nDrawTriPatch
 * Signature: (ILjava/nio/FloatBuffer;Lorg/lwjgl/d3d/D3DTriPatchInfo;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nDrawTriPatch
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint handle, jobject numSegsBuffer, jobject triPatchInfoBuffer) {

    const D3DTRIPATCH_INFO *triPatchInfo = (const D3DTRIPATCH_INFO *)((*env)->GetDirectBufferAddress(env, triPatchInfoBuffer));

    return IDirect3DDevice9_DrawTriPatch((IDirect3DDevice9*)iDirect3DDevice9, handle, numSegs, triPatchInfo);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nEndScene
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nEndScene
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nEndStateBlock
 * Signature: (Lorg/lwjgl/d3d/IDirect3DStateBlock9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nEndStateBlock
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject stateBlock) {


    HRESULT hResult = IDirect3DDevice9_EndStateBlock((IDirect3DDevice9*)iDirect3DDevice9, &iDirect3DStateBlock9);

    setPointer(env, stateBlock, "setIDirect3DStateBlock9", (jlong)iDirect3DStateBlock9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nEvictManagedResources
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nEvictManagedResources
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetAvailableTextureMem
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetAvailableTextureMem
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetBackBuffer
 * Signature: (IIILorg/lwjgl/d3d/IDirect3DSurface9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetBackBuffer
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint swapChain, jint backBuffer, jint type, jobject backBufferSurface) {


    HRESULT hResult = IDirect3DDevice9_GetBackBuffer((IDirect3DDevice9*)iDirect3DDevice9, swapChain, backBuffer, type,
                        &iDirect3DSurface9);

    setPointer(env, backBufferSurface, "setIDirect3DSurface9", (jlong)iDirect3DSurface9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetClipPlane
 * Signature: (JLjava/nio/FloatBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetClipPlane
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong index, jobject planeBuffer) {


    return IDirect3DDevice9_GetClipPlane((IDirect3DDevice9*)iDirect3DDevice9, index, plane);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetClipStatus
 * Signature: (Lorg/lwjgl/d3d/D3DClipStatus9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetClipStatus
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject clipStatusBuffer) {


    return IDirect3DDevice9_GetClipStatus((IDirect3DDevice9*)iDirect3DDevice9, planeBuffer);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetCreationParameters
 * Signature: (Lorg/lwjgl/d3d/D3DDeviceCreationParameters;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetCreationParameters
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject parametersBuffer) {


    return IDirect3DDevice9_GetCreationParameters((IDirect3DDevice9*)iDirect3DDevice9, parameters);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetCurrentTexturePalette
 * Signature: (Ljava/nio/IntBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetCurrentTexturePalette
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject paletteNumberBuffer) {


    return IDirect3DDevice9_GetCurrentTexturePalette((IDirect3DDevice9*)iDirect3DDevice9, paletteNumber);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetDepthStencilSurface
 * Signature: (Lorg/lwjgl/d3d/IDirect3DSurface9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetDepthStencilSurface
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject zStencilSurface) {


    HRESULT hResult = IDirect3DDevice9_GetDepthStencilSurface((IDirect3DDevice9*)iDirect3DDevice9, &iDirect3DSurface9);

    setPointer(env, zStencilSurface, "setIDirect3DSurface9", (jlong)iDirect3DSurface9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetDeviceCaps
 * Signature: (Lorg/lwjgl/d3d/D3DCaps9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetDeviceCaps
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject capsBuffer) {


    return IDirect3DDevice9_GetDeviceCaps((IDirect3DDevice9*)iDirect3DDevice9, caps);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetDirect3D
 * Signature: (Lorg/lwjgl/d3d/IDirect3D9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetDirect3D
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject D3D9) {


    HRESULT hResult = IDirect3DDevice9_GetDirect3D((IDirect3DDevice9*)iDirect3DDevice9, &iDirect3D9);

    setPointer(env, D3D9, "setIDirect3D9", (jlong)iDirect3D9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetDisplayMode
 * Signature: (ILorg/lwjgl/d3d/D3DDisplaymode;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetDisplayMode
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint swapChain, jobject modeBuffer) {


    return IDirect3DDevice9_GetDisplayMode((IDirect3DDevice9*)iDirect3DDevice9, swapChain, mode);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetFrontBufferData
 * Signature: (ILorg/lwjgl/d3d/IDirect3DSurface9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetFrontBufferData
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint swapChain, jlong destSurface) {

                (IDirect3DSurface9 *)destSurface);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetFVF
 * Signature: (Ljava/nio/LongBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetFVF
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject FVFBuffer) {


    return IDirect3DDevice9_GetFVF((IDirect3DDevice9*)iDirect3DDevice9, FVF);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetGammaRamp
 * Signature: (ILorg/lwjgl/d3d/D3DGammaRamp;)J
 */
JNIEXPORT void JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetGammaRamp
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint swapChain, jobject rampBuffer) {


    IDirect3DDevice9_GetGammaRamp((IDirect3DDevice9*)iDirect3DDevice9, swapChain, ramp);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetIndices
 * Signature: (Lorg/lwjgl/d3d/IDirect3DIndexBuffer9;Ljava/nio/IntBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetIndices
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject indexData) {


    HRESULT hResult = IDirect3DDevice9_GetIndices((IDirect3DDevice9*)iDirect3DDevice9, &iDirect3DIndexBuffer9);

    setPointer(env, indexData, "setIDirect3DIndexBuffer9", (jlong)iDirect3DIndexBuffer9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetLight
 * Signature: (JLorg/lwjgl/d3d/D3DLight9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetLight
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong index, jobject lightBuffer) {


    return IDirect3DDevice9_GetLight((IDirect3DDevice9*)iDirect3DDevice9, index, light);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetLightEnable
 * Signature: (JZ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetLightEnable
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong index, jobject enableBuffer) {


    return IDirect3DDevice9_GetLightEnable((IDirect3DDevice9*)iDirect3DDevice9, index, enable);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetMaterial
 * Signature: (Lorg/lwjgl/d3d/D3DMaterial9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetMaterial
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject materialBuffer) {


    return IDirect3DDevice9_GetMaterial((IDirect3DDevice9*)iDirect3DDevice9, material);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetNPatchMode
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetNPatchMode
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetNumberOfSwapChains
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetNumberOfSwapChains
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetPaletteEntries
 * Signature: (ILorg/lwjgl/d3d/PaletteEntry;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetPaletteEntries
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint paletteNumber, jobject entriesBuffer) {


    return IDirect3DDevice9_GetPaletteEntries((IDirect3DDevice9*)iDirect3DDevice9, paletteNumber, entries);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetPixelShader
 * Signature: (Lorg/lwjgl/d3d/IDirect3DPixelShader9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetPixelShader
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject shader) {


    HRESULT hResult = IDirect3DDevice9_GetPixelShader((IDirect3DDevice9*)iDirect3DDevice9, &iDirect3DPixelShader9);

    setPointer(env, shader, "setIDirect3DPixelShader9", (jlong)iDirect3DPixelShader9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetPixelShaderConstantB
 * Signature: (IZI)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetPixelShaderConstantB
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint startRegister, jobject constantDataBuffer, jint boolCount) {


    return IDirect3DDevice9_GetPixelShaderConstantB((IDirect3DDevice9*)iDirect3DDevice9, startRegister, constantData,
                boolCount);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetPixelShaderConstantF
 * Signature: (ILjava/nio/FloatBuffer;I)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetPixelShaderConstantF
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint startRegister, jobject constantDataBuffer, jint vector4fCount) {


    return IDirect3DDevice9_GetPixelShaderConstantF((IDirect3DDevice9*)iDirect3DDevice9, startRegister, constantData,
                vector4fCount);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetPixelShaderConstantI
 * Signature: (ILjava/nio/IntBuffer;I)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetPixelShaderConstantI
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint startRegister, jobject constantDataBuffer, jint vector4iCount) {


    return IDirect3DDevice9_GetPixelShaderConstantI((IDirect3DDevice9*)iDirect3DDevice9, startRegister, constantData,
                vector4iCount);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetRasterStatus
 * Signature: (ILorg/lwjgl/d3d/D3DRasterStatus;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetRasterStatus
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint swapChain, jobject rasterStatusBuffer) {


    return IDirect3DDevice9_GetRasterStatus((IDirect3DDevice9*)iDirect3DDevice9, swapChain, rasterStatus);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetRenderState
 * Signature: (IJ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetRenderState
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint state, jobject valueBuffer) {


    return IDirect3DDevice9_GetRenderState((IDirect3DDevice9*)iDirect3DDevice9, state, value);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetRenderTarget
 * Signature: (JLorg/lwjgl/d3d/IDirect3DSurface9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetRenderTarget
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong renderTargetIndex, jobject renderTarget) {


    HRESULT hResult = IDirect3DDevice9_GetRenderTarget((IDirect3DDevice9*)iDirect3DDevice9, renderTargetIndex,
                        &iDirect3DSurface9);

    setPointer(env, renderTarget, "setIDirect3DSurface9", (jlong)iDirect3DSurface9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetRenderTargetData
 * Signature: (Lorg/lwjgl/d3d/IDirect3DSurface9;Lorg/lwjgl/d3d/IDirect3DSurface9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetRenderTargetData
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong renderTarget, jlong destSurface) {

            (IDirect3DSurface9 *)destSurface);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetSamplerState
 * Signature: (JILjava/nio/LongBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetSamplerState
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong sampler, jint type, jobject valueBuffer) {


    return IDirect3DDevice9_GetSamplerState((IDirect3DDevice9*)iDirect3DDevice9, sampler, type, value);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetScissorRect
 * Signature: (Lorg/lwjgl/d3d/Rectangle;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetScissorRect
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject rectBuffer) {


    return IDirect3DDevice9_GetScissorRect((IDirect3DDevice9*)iDirect3DDevice9, rect);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetSoftwareVertexProcessing
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetSoftwareVertexProcessing
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetStreamSource
 * Signature: (ILorg/lwjgl/d3d/IDirect3DVertexBuffer9;II)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetStreamSource
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint streamNumber, jobject streamData, jobject offsetInBytesBuffer, jobject strideBuffer) {

    UINT* offsetInBytes = (UINT*)((*env)->GetDirectBufferAddress(env, offsetInBytesBuffer));
    UINT* stride = (UINT*)((*env)->GetDirectBufferAddress(env, strideBuffer));

    HRESULT hResult = IDirect3DDevice9_GetStreamSource((IDirect3DDevice9*)iDirect3DDevice9, streamNumber,
                        &iDirect3DVertexBuffer9, offsetInBytes, stride);

    setPointer(env, streamData, "setIDirect3DVertexBuffer9", (jlong)iDirect3DVertexBuffer9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetStreamSourceFreq
 * Signature: (ILjava/nio/IntBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetStreamSourceFreq
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint streamNumber, jobject dividerBuffer) {


    return IDirect3DDevice9_GetStreamSourceFreq((IDirect3DDevice9*)iDirect3DDevice9, streamNumber, divider);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetSwapChain
 * Signature: (ILorg/lwjgl/d3d/IDirect3DSwapChain9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetSwapChain
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint swapChainOrdinal, jobject swapChain) {


    HRESULT hResult = IDirect3DDevice9_GetSwapChain((IDirect3DDevice9*)iDirect3DDevice9, swapChainOrdinal,
                        &iDirect3DSwapChain9);

    setPointer(env, swapChain, "setIDirect3DSwapChain9", (jlong)iDirect3DSwapChain9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetTexture
 * Signature: (JLorg/lwjgl/d3d/IDirect3DBaseTexture9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetTexture
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong stage, jobject texture) {


    HRESULT hResult = IDirect3DDevice9_GetTexture((IDirect3DDevice9*)iDirect3DDevice9, stage,
                        &iDirect3DBaseTexture9);

    setPointer(env, texture, "setIDirect3DBaseTexture9", (jlong)iDirect3DBaseTexture9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetTextureStageState
 * Signature: (JIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetTextureStageState
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong stage, jint type, jobject valueBuffer) {


    return IDirect3DDevice9_GetTextureStageState((IDirect3DDevice9*)iDirect3DDevice9, stage, type, value);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetTransform
 * Signature: (ILorg/lwjgl/d3d/D3DMatrix;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetTransform
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint state, jobject matrixBuffer) {


    return IDirect3DDevice9_GetTransform((IDirect3DDevice9*)iDirect3DDevice9, state, matrix);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetVertexDeclaration
 * Signature: (Lorg/lwjgl/d3d/IDirect3DVertexDeclaration9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetVertexDeclaration
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject vertexDecleration) {


    HRESULT hResult = IDirect3DDevice9_GetVertexDeclaration((IDirect3DDevice9*)iDirect3DDevice9,
                        &iDirect3DVertexDeclaration9);

    setPointer(env, vertexDecleration, "setIDirect3DVertexDeclaration9", (jlong)iDirect3DVertexDeclaration9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetVertexShader
 * Signature: (Lorg/lwjgl/d3d/IDirect3DVertexShader9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetVertexShader
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject shader) {


    HRESULT hResult = IDirect3DDevice9_GetVertexShader((IDirect3DDevice9*)iDirect3DDevice9,
                        &iDirect3DVertexShader9);

    setPointer(env, shader, "setIDirect3DVertexShader9", (jlong)iDirect3DVertexShader9);

    return hResult;
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetVertexShaderConstantB
 * Signature: (IZI)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetVertexShaderConstantB
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint startRegister, jobject constantDataBuffer, jint boolCount) {


    return IDirect3DDevice9_GetVertexShaderConstantB((IDirect3DDevice9*)iDirect3DDevice9, startRegister, constantData, boolCount);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetVertexShaderConstantF
 * Signature: (ILjava/nio/FloatBuffer;I)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetVertexShaderConstantF
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint startRegister, jobject constantDataBuffer, jint vector4fCount) {


    return IDirect3DDevice9_GetVertexShaderConstantF((IDirect3DDevice9*)iDirect3DDevice9, startRegister, constantData, vector4fCount);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetVertexShaderConstantI
 * Signature: (ILjava/nio/IntBuffer;I)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetVertexShaderConstantI
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint startRegister, jobject constantDataBuffer, jint vector4iCount) {


    return IDirect3DDevice9_GetVertexShaderConstantI((IDirect3DDevice9*)iDirect3DDevice9, startRegister, constantData, vector4iCount);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nGetViewport
 * Signature: (Lorg/lwjgl/d3d/D3DViewport9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nGetViewport
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject viewportBuffer) {


    return IDirect3DDevice9_GetViewport((IDirect3DDevice9*)iDirect3DDevice9, viewport);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nLightEnable
 * Signature: (JZ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nLightEnable
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong lightIndex, jboolean enable) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nMultiplyTransform
 * Signature: (ILorg/lwjgl/d3d/D3DMatrix;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nMultiplyTransform
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint state, jobject matrixBuffer) {


    return IDirect3DDevice9_MultiplyTransform((IDirect3DDevice9*)iDirect3DDevice9, state, matrix);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nPresent
 * Signature: (Lorg/lwjgl/d3d/Rectangle;Lorg/lwjgl/d3d/Rectangle;JLorg/lwjgl/d3d/D3DRegionData;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nPresent
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject sourceRectBuffer, jobject destRectBuffer, jlong destWindowOverride, jobject dirtyRegionBuffer) {

//    CONST RECT* destRect;
//    CONST RGNDATA* dirtyRegion;

//    if(sourceRectBuffer != NULL) {
//        sourceRect = (RECT*)((*env)->GetDirectBufferAddress(env, sourceRectBuffer));
//    }
//    else {
//        sourceRect = NULL;
//    }
//    if(destRectBuffer != NULL) {
//        destRect = (RECT*)((*env)->GetDirectBufferAddress(env, destRectBuffer));
//    }
//    else {
//        destRect = NULL;
//    }
//    if(dirtyRegionBuffer != NULL) {
//        dirtyRegion = (RGNDATA*)((*env)->GetDirectBufferAddress(env, dirtyRegionBuffer));
//    }
//    else {
//        dirtyRegion = NULL;
//    }

//    return IDirect3DDevice9_Present((IDirect3DDevice9*)iDirect3DDevice9, sourceRect, destRect, (HWND)(INT_PTR)destWindowOverride, dirtyRegion);
    return IDirect3DDevice9_Present((IDirect3DDevice9*)iDirect3DDevice9, NULL, NULL, NULL, NULL);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nProcessVertices
 * Signature: (IIILorg/lwjgl/d3d/IDirect3DVertexBuffer9;Lorg/lwjgl/d3d/IDirect3DVertexDeclaration9;J)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nProcessVertices
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint srcStartIndex, jint destIndex, jint vertexCount, jlong destBuffer, jlong vertexDecl, jlong flags) {

                (IDirect3DVertexBuffer9*)destBuffer, (IDirect3DVertexDeclaration9*)vertexDecl, flags);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nReset
 * Signature: (Lorg/lwjgl/d3d/D3DPresentParameters;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nReset
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject presentationParametersBuffer) {


    return IDirect3DDevice9_Reset((IDirect3DDevice9*)iDirect3DDevice9, presentationParameters);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetClipPlane
 * Signature: (JLjava/nio/FloatBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetClipPlane
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong index, jobject planeBuffer) {


    return IDirect3DDevice9_SetClipPlane((IDirect3DDevice9*)iDirect3DDevice9, index, plane);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetClipStatus
 * Signature: (Lorg/lwjgl/d3d/D3DClipStatus9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetClipStatus
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject clipStatusBuffer) {


    return IDirect3DDevice9_SetClipStatus((IDirect3DDevice9*)iDirect3DDevice9, clipStatus);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetCurrentTexturePalette
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetCurrentTexturePalette
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint paletteNumber) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetCursorPosition
 * Signature: (IIJ)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetCursorPosition
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint x, jint y, jlong flags) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetCursorProperties
 * Signature: (IILorg/lwjgl/d3d/IDirect3DSurface9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetCursorProperties
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint xHotSpot, jint yHotSpot, jlong cursorBitmap) {

                (IDirect3DSurface9*)cursorBitmap);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetDepthStencilSurface
 * Signature: (Lorg/lwjgl/d3d/IDirect3DSurface9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetDepthStencilSurface
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong newZStencil) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetDialogBoxMode
 * Signature: (Z)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetDialogBoxMode
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jboolean enableDialogs) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetFVF
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetFVF
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong FVF) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetGammaRamp
 * Signature: (IJLorg/lwjgl/d3d/D3DGammaRamp;)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetGammaRamp
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint swapChain, jlong flags, jobject rampBuffer) {


    IDirect3DDevice9_SetGammaRamp((IDirect3DDevice9*)iDirect3DDevice9, swapChain, flags, ramp);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetIndices
 * Signature: (Lorg/lwjgl/d3d/IDirect3DIndexBuffer9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetIndices
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong indexData) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetLight
 * Signature: (JLorg/lwjgl/d3d/D3DLight9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetLight
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong index, jobject lightBuffer) {


    return IDirect3DDevice9_SetLight((IDirect3DDevice9*)iDirect3DDevice9, index, light);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetMaterial
 * Signature: (Lorg/lwjgl/d3d/D3DMaterial9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetMaterial
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject materialBuffer) {


    return IDirect3DDevice9_SetMaterial((IDirect3DDevice9*)iDirect3DDevice9, material);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetNPatchMode
 * Signature: (F)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetNPatchMode
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jfloat segments) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetPaletteEntries
 * Signature: (ILorg/lwjgl/d3d/PaletteEntry;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetPaletteEntries
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint paletteNumber, jobject entriesBuffer) {


    return IDirect3DDevice9_SetPaletteEntries((IDirect3DDevice9*)iDirect3DDevice9, paletteNumber, entries);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetPixelShader
 * Signature: (Lorg/lwjgl/d3d/IDirect3DPixelShader9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetPixelShader
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong shader) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetPixelShaderConstantB
 * Signature: (IZI)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetPixelShaderConstantB
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint startRegister, jobject constantDataBuffer, jint boolCount) {


    return IDirect3DDevice9_SetPixelShaderConstantB((IDirect3DDevice9*)iDirect3DDevice9, startRegister, constantData, boolCount);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetPixelShaderConstantF
 * Signature: (ILjava/nio/FloatBuffer;I)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetPixelShaderConstantF
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint startRegister, jobject constantDataBuffer, jint vector4fCount) {


    return IDirect3DDevice9_SetPixelShaderConstantF((IDirect3DDevice9*)iDirect3DDevice9, startRegister, constantData, vector4fCount);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetPixelShaderConstantI
 * Signature: (ILjava/nio/IntBuffer;I)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetPixelShaderConstantI
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint startRegister, jobject constantDataBuffer, jint vector4iCount) {


    return IDirect3DDevice9_SetPixelShaderConstantI((IDirect3DDevice9*)iDirect3DDevice9, startRegister, constantData, vector4iCount);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetRenderState
 * Signature: (IJ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetRenderState
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint state, jlong value) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetRenderTarget
 * Signature: (JLorg/lwjgl/d3d/IDirect3DSurface9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetRenderTarget
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong renderTargetIndex, jlong renderTarget) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetSamplerState
 * Signature: (JIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetSamplerState
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong sampler, jint type, jlong value) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetScissorRect
 * Signature: (Lorg/lwjgl/d3d/Rectangle;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetScissorRect
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject rectBuffer) {


    return IDirect3DDevice9_SetScissorRect((IDirect3DDevice9*)iDirect3DDevice9, rect);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetSoftwareVertexProcessing
 * Signature: (Z)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetSoftwareVertexProcessing
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jboolean software) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetStreamSource
 * Signature: (ILorg/lwjgl/d3d/IDirect3DVertexBuffer9;II)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetStreamSource
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint streamNumber, jlong streamData, jint offsetInBytes, jint stride) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetStreamSourceFreq
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetStreamSourceFreq
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint streamNumber, jint frequencyParameter) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetTexture
 * Signature: (JLorg/lwjgl/d3d/IDirect3DBaseTexture9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetTexture
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong sampler, jlong texture) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetTextureStageState
 * Signature: (JIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetTextureStageState
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong stage, jint type, jlong value) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetTransform
 * Signature: (ILorg/lwjgl/d3d/D3DMatrix;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetTransform
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint state, jobject matrixBuffer) {


    return IDirect3DDevice9_SetTransform((IDirect3DDevice9*)iDirect3DDevice9, state, matrix);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetVertexDeclaration
 * Signature: (Lorg/lwjgl/d3d/IDirect3DVertexDeclaration9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetVertexDeclaration
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong vertexDeclaration) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetVertexShader
 * Signature: (Lorg/lwjgl/d3d/IDirect3DVertexShader9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetVertexShader
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong shader) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetVertexShaderConstantB
 * Signature: (IZI)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetVertexShaderConstantB
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint startRegister, jobject constantDataBuffer, jint boolCount) {


    return IDirect3DDevice9_SetVertexShaderConstantB((IDirect3DDevice9*)iDirect3DDevice9, startRegister, constantData, boolCount);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetVertexShaderConstantF
 * Signature: (ILjava/nio/FloatBuffer;I)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetVertexShaderConstantF
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint startRegister, jobject constantDataBuffer, jint vector4fCount) {


    return IDirect3DDevice9_SetVertexShaderConstantF((IDirect3DDevice9*)iDirect3DDevice9, startRegister, constantData, vector4fCount);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetVertexShaderConstantI
 * Signature: (ILjava/nio/IntBuffer;I)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetVertexShaderConstantI
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jint startRegister, jobject constantDataBuffer, jint vector4iCount) {


    return IDirect3DDevice9_SetVertexShaderConstantI((IDirect3DDevice9*)iDirect3DDevice9, startRegister, constantData, vector4iCount);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nSetViewport
 * Signature: (Lorg/lwjgl/d3d/D3DViewport9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nSetViewport
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject viewportBuffer) {


    return IDirect3DDevice9_SetViewport((IDirect3DDevice9*)iDirect3DDevice9, viewport);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nShowCursor
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nShowCursor
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jboolean show) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nStretchRect
 * Signature: (Lorg/lwjgl/d3d/IDirect3DSurface9;Lorg/lwjgl/d3d/Rectangle;Lorg/lwjgl/d3d/IDirect3DSurface9;Lorg/lwjgl/d3d/Rectangle;I)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nStretchRect
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong sourceSurface, jobject sourceRectBuffer, jlong destSurface, jobject destRectBuffer, jint filter) {

    CONST RECT* destRect = (RECT*)((*env)->GetDirectBufferAddress(env, destRectBuffer));

    return IDirect3DDevice9_StretchRect((IDirect3DDevice9*)iDirect3DDevice9, (IDirect3DSurface9*)sourceSurface, sourceRect, (IDirect3DSurface9*)destSurface, destRect, filter);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nTestCooperativeLevel
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nTestCooperativeLevel
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9) {

}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nUpdateSurface
 * Signature: (Lorg/lwjgl/d3d/IDirect3DSurface9;Lorg/lwjgl/d3d/Rectangle;Lorg/lwjgl/d3d/IDirect3DSurface9;Lorg/lwjgl/d3d/Point;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nUpdateSurface
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong sourceSurface, jobject sourceRectBuffer, jlong destinationSurface, jobject destinationPointBuffer) {

    CONST POINT* destinationPoint = (POINT*)((*env)->GetDirectBufferAddress(env, destinationPointBuffer));

    return IDirect3DDevice9_UpdateSurface((IDirect3DDevice9*)iDirect3DDevice9, (IDirect3DSurface9*)sourceSurface, sourceRect, (IDirect3DSurface9*)destinationSurface, destinationPoint);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nUpdateTexture
 * Signature: (Lorg/lwjgl/d3d/IDirect3DBaseTexture9;Lorg/lwjgl/d3d/IDirect3DBaseTexture9;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nUpdateTexture
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jlong sourceTexture, jlong destinationTexture) {

                (IDirect3DBaseTexture9*)destinationTexture);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nValidateDev
 * Signature: (Ljava/nio/LongBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nValidateDevice
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9, jobject numPassesBuffer) {


    return IDirect3DDevice9_ValidateDevice((IDirect3DDevice9*)iDirect3DDevice9, numPasses);
}

/*
 * Class:     org_lwjgl_d3d_IDirect3DDevice9
 * Method:    nRelease
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_d3d_IDirect3DDevice9_nRelease
  (JNIEnv *env, jobject object, jlong iDirect3DDevice9) {

}