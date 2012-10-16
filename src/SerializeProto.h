// This is not really a header file, but it can be used as one with
// appropriate #define statements.

	// types (common)
	TYPE("Int16",			UINT16,		1)
	TYPE("Int32",			UINT32,		2)
	TYPE("Int64",			UINT64,		3)
	TYPE("Hash128",			HASH128,	4)
	TYPE("Hash256",			HASH256,	5)
	TYPE("Amount",			AMOUNT,		6)
	TYPE("VariableLength",	VL,			7)
	TYPE("Account",			ACCOUNT,	8)
	// 9-13 are reserved
	TYPE("Object",			OBJECT,		14)
	TYPE("Array",			ARRAY,		15)

	// types (uncommon)
	TYPE("Int8",			UINT8,		16)
	TYPE("Hash160",			HASH160,	17)
	TYPE("PathSet",			PATHSET,	18)
	TYPE("Vector256",		VECTOR256,	19)



	// 8-bit integers
	FIELD(CloseResolution,		UINT8, 1)
	FIELD(TemplateEntryType,	UINT8, 2)
	FIELD(TransactionResult,	UINT8, 3)

	// 16-bit integers
	FIELD(LedgerEntryType,		UINT16, 1)
	FIELD(TransactionType,		UINT16, 2)

	// 32-bit integers (common)
	FIELD(Flags,				UINT32, 2)
	FIELD(SourceTag,			UINT32, 3)
	FIELD(Sequence,				UINT32, 4)
	FIELD(LastTxnSeq,			UINT32, 5)
	FIELD(LedgerSequence,		UINT32, 6)
	FIELD(CloseTime,			UINT32, 7)
	FIELD(ParentCloseTime,		UINT32, 8)
	FIELD(SigningTime,			UINT32, 9)
	FIELD(Expiration,			UINT32, 10)
	FIELD(TransferRate,			UINT32, 11)
	FIELD(PublishSize,			UINT32, 12)

	// 32-bit integers (uncommon)
	FIELD(HighQualityIn,		UINT32, 16)
	FIELD(HighQualityOut,		UINT32, 17)
	FIELD(LowQualityIn,			UINT32, 18)
	FIELD(LowQualityOut,		UINT32, 19)
	FIELD(QualityIn,			UINT32, 20)
	FIELD(QualityOut,			UINT32, 21)
	FIELD(StampEscrow,			UINT32, 22)
	FIELD(BondAmount,			UINT32, 23)
	FIELD(LoadFee,				UINT32, 24)
	FIELD(OfferSequence,		UINT32, 25)

	// 64-bit integers
	FIELD(IndexNext,			UINT64, 1)
	FIELD(IndexPrevious,		UINT64, 2)
	FIELD(BookNode,				UINT64, 3)
	FIELD(OwnerNode,			UINT64, 4)
	FIELD(BaseFee,				UINT64, 5)

	// 128-bit
	FIELD(EmailHash,			HASH128, 1)

	// 256-bit (common)
	FIELD(LedgerHash,			HASH256, 1)
	FIELD(ParentHash,			HASH256, 2)
	FIELD(TransactionHash,		HASH256, 3)
	FIELD(AccountHash,			HASH256, 4)
	FIELD(LastTxnID,			HASH256, 5)
	FIELD(LedgerIndex,			HASH256, 6)
	FIELD(WalletLocator,		HASH256, 7)
	FIELD(PublishHash,			HASH256, 8)

	// 256-bit (uncommon)
	FIELD(BookDirectory,		HASH256, 16)
	FIELD(InvoiceID,			HASH256, 17)
	FIELD(Nickname,				HASH256, 18)

	// currency amount (common)
	FIELD(Amount,				AMOUNT, 1)
	FIELD(Balance,				AMOUNT, 2)
	FIELD(LimitAmount,			AMOUNT, 3)
	FIELD(TakerPays,			AMOUNT, 4)
	FIELD(TakerGets,			AMOUNT, 5)
	FIELD(LowLimit,				AMOUNT, 6)
	FIELD(HighLimit,			AMOUNT, 7)
	FIELD(Fee,					AMOUNT, 8)
	FIELD(SendMax,				AMOUNT, 9)

	// currency amount (uncommon)
	FIELD(MinimumOffer,			AMOUNT,	16)
	FIELD(RippleEscrow,			AMOUNT,	17)
	FIELD(PreviousBalance,		AMOUNT,	18)
	FIELD(FinalBalance,			AMOUNT,	19)
	FIELD(PreviousTakerPays,	AMOUNT,	20)
	FIELD(PreviousTakerGets,	AMOUNT,	21)
	FIELD(FinalTakerPays,		AMOUNT,	22)
	FIELD(FinalTakerGets,		AMOUNT,	23)

	// variable length
	FIELD(PublicKey,			VL, 1)
	FIELD(MessageKey,			VL, 2)
	FIELD(SigningPubKey,		VL, 3)
	FIELD(TxnSignature,			VL, 4)
	FIELD(Generator,			VL, 5)
	FIELD(Signature,			VL, 6)
	FIELD(Domain,				VL, 7)
	FIELD(FundCode,				VL, 8)
	FIELD(RemoveCode,			VL, 9)
	FIELD(ExpireCode,			VL, 10)
	FIELD(CreateCode,			VL, 11)

	// account
	FIELD(Account,				ACCOUNT, 1)
	FIELD(Owner,				ACCOUNT, 2)
	FIELD(Destination,			ACCOUNT, 3)
	FIELD(Issuer,				ACCOUNT, 4)
	FIELD(Target,				ACCOUNT, 7)
	FIELD(AuthorizedKey,		ACCOUNT, 8)

	// account (uncommon)
	FIELD(PreviousAccount,		ACCOUNT, 16)
	FIELD(LowID,				ACCOUNT, 17)
	FIELD(HighID,				ACCOUNT, 18)

	// path set
	FIELD(Paths,				PATHSET, 1)

	// vector of 256-bit
	FIELD(Indexes,				VECTOR256, 1)

	// inner object
	// OBJECT/1 is reserved for end of object
	FIELD(TemplateEntry,		OBJECT, 1)
	FIELD(CreatedNode,			OBJECT,	2)
	FIELD(DeletedNode,			OBJECT,	3)
	FIELD(ModifiedNode,			OBJECT,	4)

	// array of objects
	// ARRAY/1 is reserved for end of array
	FIELD(TransactionMetaData,	ARRAY, 1)
	FIELD(SigningAccounts,		ARRAY, 2)
	FIELD(TxnSignatures,		ARRAY, 3)
	FIELD(Signatures,			ARRAY, 4)
	FIELD(Template,				ARRAY, 5)
	FIELD(Necessary,			ARRAY, 6)
	FIELD(Sufficient,			ARRAY, 7)
