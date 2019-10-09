#ifndef RWRAPPER_PTR_H
#define RWRAPPER_PTR_H

#include <memory>

#include "Common.h"

template<typename T>
using Ptr = std::shared_ptr<T>;

template<typename TObject, typename ...TArgs>
inline Ptr<TObject> makePtr(TArgs&& ...args) {
  return Ptr<TObject>(new TObject(std::forward<TArgs>(args)...));
}

template<typename TObject>
inline Ptr<TObject> ptrOf(TObject* object) {
  return Ptr<TObject>(object);
}

#endif //RWRAPPER_PTR_H