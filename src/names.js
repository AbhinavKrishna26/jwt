interface File : Blob {
  constructor(sequence<BlobPart> fileBits,
              USVString fileName,
              optional FilePropertyBag options = {});
  readonly attribute DOMString name;
  readonly attribute long long lastModified;
};

dictionary FilePropertyBag : BlobPropertyBag {
  long long lastModified;
};
